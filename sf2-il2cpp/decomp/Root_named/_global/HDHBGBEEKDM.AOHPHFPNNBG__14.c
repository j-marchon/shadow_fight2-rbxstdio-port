// TypeDefIndex 14
// Namespace: 
// public class ActionCreateModel.AOHPHFPNNBG
// Fields:
//   public string HNNFBCMNGIA; // 0x10
//   public string GHNIAGEHGEP; // 0x18
//   public List<NJPIKDFEOCN> GFBNJPMOEKD; // 0x20

// ===== public void .ctor(string OAKCHEGKLBP, List<NJPIKDFEOCN> DPOPJKJLDEE, string DEKCPPOJFEH = "")  [RVA 0x2FF351C]
// ActionCreateModel.AOHPHFPNNBG$$.ctor @ RVA 0x2FF351C

void ActionCreateModel_AOHPHFPNNBG___ctor
               (ActionCreateModel_AOHPHFPNNBG_o *__this,System_String_o *OAKCHEGKLBP,
               System_Collections_Generic_List_NJPIKDFEOCN__o *DPOPJKJLDEE,
               System_String_o *DEKCPPOJFEH,MethodInfo *method)

{
  System_String_o **ppSVar1;
  System_Collections_Generic_List_NJPIKDFEOCN__o **ppSVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).HNNFBCMNGIA = OAKCHEGKLBP;
  thunk_FUN_01c20e04(&__this->fields,OAKCHEGKLBP);
  ppSVar1 = &(__this->fields).GHNIAGEHGEP;
  *ppSVar1 = DEKCPPOJFEH;
  thunk_FUN_01c20e04(ppSVar1,DEKCPPOJFEH);
  ppSVar2 = &(__this->fields).GFBNJPMOEKD;
  *ppSVar2 = DPOPJKJLDEE;
  thunk_FUN_01c20e04(ppSVar2,DPOPJKJLDEE);
  return;
}

