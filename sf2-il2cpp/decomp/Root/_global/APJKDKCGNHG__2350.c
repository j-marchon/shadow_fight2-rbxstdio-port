// TypeDefIndex 2350
// Namespace: 
// public class APJKDKCGNHG : KCEKMOECEJK
// Fields:
//   public APJKDKCGNHG.PABADKLLFHB GLGIFNCMMAK; // 0x10
//   public APJKDKCGNHG.CCPCHLLGJJE PJIACDFEPAP; // 0x18

// ===== public void IFBBIDIEBEL(float BCEJOJECHDA)  [RVA 0x33242D4]
// APJKDKCGNHG$$IFBBIDIEBEL @ RVA 0x33242D4

void APJKDKCGNHG__IFBBIDIEBEL(APJKDKCGNHG_o *__this,float BCEJOJECHDA,MethodInfo *method)

{
  APJKDKCGNHG_PABADKLLFHB_o *pAVar1;
  
  pAVar1 = (__this->fields).GLGIFNCMMAK;
  if (pAVar1 != (APJKDKCGNHG_PABADKLLFHB_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034242f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pAVar1->fields).super.super.invoke_impl)
              ((pAVar1->fields).super.super.method_code,(pAVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float EIJGFNBCPLK()  [RVA 0x33242F8]
// APJKDKCGNHG$$EIJGFNBCPLK @ RVA 0x33242F8

float APJKDKCGNHG__EIJGFNBCPLK(APJKDKCGNHG_o *__this,MethodInfo *method)

{
  APJKDKCGNHG_CCPCHLLGJJE_o *pAVar1;
  float fVar2;
  
  pAVar1 = (__this->fields).PJIACDFEPAP;
  if (pAVar1 != (APJKDKCGNHG_CCPCHLLGJJE_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03424314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(*(code *)(pAVar1->fields).super.super.invoke_impl)
                             ((pAVar1->fields).super.super.method_code,
                              (pAVar1->fields).super.super.method);
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x332431C]
// APJKDKCGNHG$$.ctor @ RVA 0x332431C

void APJKDKCGNHG___ctor(APJKDKCGNHG_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

