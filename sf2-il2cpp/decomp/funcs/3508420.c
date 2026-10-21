// KEIAEKNFNNA$$ANAJBOCEMEF @ RVA 0x3508420

void KEIAEKNFNNA__ANAJBOCEMEF(KEIAEKNFNNA_o *__this,int64_t AKDMKFILNFN,MethodInfo *method)

{
  MethodInfo *method_00;
  FMOAMIIOKNP_o *pFVar1;
  System_Action_o *pSVar2;
  System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__o *GIAHCGHPBBA;
  
  if ((DAT_045688aa & 1) == 0) {
    FUN_01bab630(&FMOAMIIOKNP_TypeInfo);
    DAT_045688aa = 1;
  }
  pFVar1 = (__this->fields).JEPHJLEICLO;
  if (pFVar1 != (FMOAMIIOKNP_o *)0x0) {
    GIAHCGHPBBA = (pFVar1->fields)._APDMACJCLEG_k__BackingField;
    pFVar1 = (FMOAMIIOKNP_o *)thunk_FUN_01bda818(FMOAMIIOKNP_TypeInfo);
    FMOAMIIOKNP___ctor(pFVar1,AKDMKFILNFN,GIAHCGHPBBA,(MethodInfo *)0x0);
    (__this->fields).JEPHJLEICLO = pFVar1;
    thunk_FUN_01c20e04(&__this->fields,pFVar1);
    KEIAEKNFNNA__OPIPNIPKEKA(__this,method_00);
    pSVar2 = (__this->fields).PJFFBLOPKBC;
    if (pSVar2 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036084c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar2->fields).super.super.invoke_impl)
                ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

