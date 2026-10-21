// TypeDefIndex 1022
// Namespace: 
// private class JIBAEMHNBOF.HHCLGENAOLA
// Fields:
//   public string FCENJIHACAA; // 0x10
//   public readonly List<QuestCondition> JJEDHODDHMF; // 0x18
//   public string ENBNOOPELIP; // 0x20
//   public string OFNEAFGINLC; // 0x28
//   public string DEELCMCEILO; // 0x30

// ===== public void .ctor()  [RVA 0x30CC788]
// JIBAEMHNBOF.HHCLGENAOLA$$.ctor @ RVA 0x30CC788

void JIBAEMHNBOF_HHCLGENAOLA___ctor(JIBAEMHNBOF_HHCLGENAOLA_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_LEGDPJHPEOB__o *__this_00;
  System_Collections_Generic_List_LEGDPJHPEOB__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045662de & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<QuestCondition>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<QuestCondition>_TypeInfo);
    DAT_045662de = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_LEGDPJHPEOB__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<QuestCondition>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<QuestCondition>__ctor__);
  ppSVar1 = &(__this->fields).JJEDHODDHMF;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

