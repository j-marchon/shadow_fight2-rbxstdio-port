// TypeDefIndex 3187
// Namespace: 
// public class OLKKAIFGGAK.BJHDMBGMMEP
// Fields:
//   public OLKKAIFGGAK HEMGHNOOJPI; // 0x10
//   public List<HEFOANCOHDC> INGEFFGPJPB; // 0x18

// ===== public void .ctor(OLKKAIFGGAK KOHECBJAFKG, List<HEFOANCOHDC> JPGEBIDNGPB)  [RVA 0x34F9EBC]
// OLKKAIFGGAK.BJHDMBGMMEP$$.ctor @ RVA 0x34F9EBC

void OLKKAIFGGAK_BJHDMBGMMEP___ctor
               (OLKKAIFGGAK_BJHDMBGMMEP_o *__this,OLKKAIFGGAK_o *KOHECBJAFKG,
               System_Collections_Generic_List_HEFOANCOHDC__o *JPGEBIDNGPB,MethodInfo *method)

{
  System_Collections_Generic_List_HEFOANCOHDC__o **ppSVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).HEMGHNOOJPI = KOHECBJAFKG;
  thunk_FUN_01c20e04(&__this->fields,KOHECBJAFKG);
  ppSVar1 = &(__this->fields).INGEFFGPJPB;
  *ppSVar1 = JPGEBIDNGPB;
  thunk_FUN_01c20e04(ppSVar1,JPGEBIDNGPB);
  return;
}

