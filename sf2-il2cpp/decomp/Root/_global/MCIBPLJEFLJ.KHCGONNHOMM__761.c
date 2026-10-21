// TypeDefIndex 761
// Namespace: 
// public class MCIBPLJEFLJ.KHCGONNHOMM
// Fields:
//   public GEBHIBIEAJE POPNNGCHBML; // 0x10
//   public GEBHIBIEAJE GBPPPKHOPEA; // 0x18
//   private CNDPAJOLKFN BPILADHMHBB; // 0x20
//   private CNDPAJOLKFN HNNCKGOBKLK; // 0x28

// ===== public void OCIGNBBDLEL(CNDPAJOLKFN CJNHFNHJHPE)  [RVA 0x3050438]
// MCIBPLJEFLJ.KHCGONNHOMM$$OCIGNBBDLEL @ RVA 0x3050438

void MCIBPLJEFLJ_KHCGONNHOMM__OCIGNBBDLEL
               (MCIBPLJEFLJ_KHCGONNHOMM_o *__this,CNDPAJOLKFN_o *CJNHFNHJHPE,MethodInfo *method)

{
  CNDPAJOLKFN_o *__this_00;
  
  __this_00 = (__this->fields).HNNCKGOBKLK;
  if (__this_00 != (CNDPAJOLKFN_o *)0x0) {
    CNDPAJOLKFN__FOOHBJNHOKK(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3050504]
// MCIBPLJEFLJ.KHCGONNHOMM$$.ctor @ RVA 0x3050504

void MCIBPLJEFLJ_KHCGONNHOMM___ctor(MCIBPLJEFLJ_KHCGONNHOMM_o *__this,MethodInfo *method)

{
  CNDPAJOLKFN_o *pCVar1;
  CNDPAJOLKFN_o **ppCVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565e47 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_04565e47 = 1;
    method = extraout_x1;
  }
  pCVar1 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo,method);
  CNDPAJOLKFN___ctor(pCVar1,(MethodInfo *)0x0);
  ppCVar2 = &(__this->fields).BPILADHMHBB;
  *ppCVar2 = pCVar1;
  thunk_FUN_01c20e04(ppCVar2,pCVar1);
  pCVar1 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
  CNDPAJOLKFN___ctor(pCVar1,(MethodInfo *)0x0);
  ppCVar2 = &(__this->fields).HNNCKGOBKLK;
  *ppCVar2 = pCVar1;
  thunk_FUN_01c20e04(ppCVar2,pCVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public CNDPAJOLKFN NOKNGPKCPDH()  [RVA 0x30505E4]
// MCIBPLJEFLJ.KHCGONNHOMM$$NOKNGPKCPDH @ RVA 0x30505E4

CNDPAJOLKFN_o *
MCIBPLJEFLJ_KHCGONNHOMM__NOKNGPKCPDH(MCIBPLJEFLJ_KHCGONNHOMM_o *__this,MethodInfo *method)

{
  return (__this->fields).BPILADHMHBB;
}


// ===== public void DEAJKMHGGDA(CNDPAJOLKFN CJNHFNHJHPE)  [RVA 0x305041C]
// MCIBPLJEFLJ.KHCGONNHOMM$$DEAJKMHGGDA @ RVA 0x305041C

void MCIBPLJEFLJ_KHCGONNHOMM__DEAJKMHGGDA
               (MCIBPLJEFLJ_KHCGONNHOMM_o *__this,CNDPAJOLKFN_o *CJNHFNHJHPE,MethodInfo *method)

{
  CNDPAJOLKFN_o *__this_00;
  
  __this_00 = (__this->fields).BPILADHMHBB;
  if (__this_00 != (CNDPAJOLKFN_o *)0x0) {
    CNDPAJOLKFN__FOOHBJNHOKK(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public CNDPAJOLKFN NKLAGPEPOHH()  [RVA 0x30505EC]
// MCIBPLJEFLJ.KHCGONNHOMM$$NKLAGPEPOHH @ RVA 0x30505EC

CNDPAJOLKFN_o *
MCIBPLJEFLJ_KHCGONNHOMM__NKLAGPEPOHH(MCIBPLJEFLJ_KHCGONNHOMM_o *__this,MethodInfo *method)

{
  return (__this->fields).HNNCKGOBKLK;
}

