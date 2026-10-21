// TypeDefIndex 3187
// Namespace: 
// public class Model.BJHDMBGMMEP
// Fields:
//   public Model HEMGHNOOJPI; // 0x10
//   public List<PerkInfoItem> INGEFFGPJPB; // 0x18

// ===== public void .ctor(Model KOHECBJAFKG, List<PerkInfoItem> JPGEBIDNGPB)  [RVA 0x34F9EBC]
// Model.BJHDMBGMMEP$$.ctor @ RVA 0x34F9EBC

void Model_BJHDMBGMMEP___ctor
               (Model_BJHDMBGMMEP_o *__this,Model_o *KOHECBJAFKG,
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

