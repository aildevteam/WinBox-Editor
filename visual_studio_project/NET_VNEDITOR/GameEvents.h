#pragma once
public ref class GameEvent
{
public:
	int Line;
	String^ Name;

	GameEvent(String^ name, int line)
	{
		Line=line;
		Name=name;
	}
};

value class EntityPredicate {
  String^ what;
public:
  EntityPredicate(String^ name) {
    what = name;
  }
  bool IsMatch(GameEvent ^e) {
    return e->Name == what;
  }
};

public ref class GameEventHandler 
{
public:
	ListBox ^listBox;
	Generic::List<GameEvent^> ^eventList;

public: GameEventHandler(ListBox^ listbox)
	{
		eventList = gcnew Generic::List<GameEvent^>();
		listBox = listbox;
	}

public: void Add(GameEvent^ e)
	{
		eventList->Add(e);
		listBox->Items->Add(e->Name);
	}

public: void Insert(GameEvent^ e,GameEvent^ after)
	{
		eventList->Insert(eventList->IndexOf(after)+1,e);
		listBox->Items->Insert(listBox->Items->IndexOf(after->Name)+1,e->Name);
	}

public: void Insert(GameEvent^ e,int after)
	{
		eventList->Insert(after+1,e);
		listBox->Items->Insert(after+1,e->Name);
	}

public: void Remove(int index ,int flag)
	{
		fixLines(Find(index),flag);

		eventList->RemoveAt(index);
		listBox->Items->RemoveAt(index);
	}

public: void Clear()
		{
			eventList->Clear();
			listBox->Items->Clear();
		}

public: GameEvent^ Find(String^ name)
		{
			return eventList->Find(gcnew Predicate<GameEvent^>(gcnew EntityPredicate(name), &EntityPredicate::IsMatch));
		}

public: GameEvent^ Find(int index)
		{
			return eventList->ToArray()[index];
		}

public: GameEvent^ nextEvent(GameEvent^ e)
		 {
			 return nextEvent(eventList->IndexOf(e));
		 }

public: GameEvent^ nextEvent(int index)
		{
			return (index+1==eventList->Count)?nullptr:eventList->ToArray()[index+1];
		}

public: void fixLines(GameEvent^ changed, int flag)
		{
			int index = eventList->IndexOf(changed);
			int Delta = (index+1==eventList->Count)?flag:eventList->ToArray()[index+1]->Line-changed->Line+flag;

			for(int i = index; i<eventList->Count; i++)
			{
				eventList->ToArray()[i]->Line-=Delta;
			}
		}

public: void Remove(String^ name ,int flag)
	{
		GameEvent^ e = Find(name);
		fixLines(e,flag);

		eventList->Remove(e);
		listBox->Items->Remove(name);
	}
};