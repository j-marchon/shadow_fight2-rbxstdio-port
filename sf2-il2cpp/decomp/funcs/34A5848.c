// KFOPKHPGAAK$$PKIFMKGDJJN @ RVA 0x34A5848

void KFOPKHPGAAK__PKIFMKGDJJN(KFOPKHPGAAK_o *__this,MethodInfo *method)

{
  LCKCDEKNLOA_o *pLVar1;
  
                    /* try { // try from 035a5848 to 036a584f has its CatchHandler @ 035a5850 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035a5834 with catch @ 035a5850
                       catch(type#2 @ 00000000) { ... } // from try @ 035a5848 with catch @ 035a5850
                        */
                    /* try { // try from 035a585c to 036a5957 has its CatchHandler @ 035a585c
                       catch() { ... } // from try @ 035a585c with catch @ 035a585c
                       catch() { ... } // from try @ 035a5a1c with catch @ 035a585c
                       catch() { ... } // from try @ 035a5a74 with catch @ 035a585c
                       catch() { ... } // from try @ 035a5ac0 with catch @ 035a585c
                       catch() { ... } // from try @ 035a5af0 with catch @ 035a585c */
  if ((DAT_045684e8 & 1) == 0) {
    FUN_01bab630(&UniRx_Disposable_TypeInfo);
    DAT_045684e8 = 1;
  }
  BOFEMGGNODC__PKIFMKGDJJN((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  pLVar1 = (__this->fields).FNGNIKNIEMM;
  if ((UniRx_Disposable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (pLVar1 != (LCKCDEKNLOA_o *)0x0) {
    UniRx_SerialDisposable__set_Disposable
              ((UniRx_SerialDisposable_o *)pLVar1,UniRx_Disposable_TypeInfo->static_fields->Empty,
               (MethodInfo *)0x0);
    pLVar1 = *(LCKCDEKNLOA_o **)&(__this->fields).ACCIHBHMFPN;
    if (pLVar1 != (LCKCDEKNLOA_o *)0x0) {
      LCKCDEKNLOA__DMLKEJNDODN(pLVar1,(MethodInfo *)0x0);
      pLVar1 = (__this->fields).FNOJIPMNDPJ;
      if (pLVar1 != (LCKCDEKNLOA_o *)0x0) {
        LCKCDEKNLOA__DMLKEJNDODN(pLVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

