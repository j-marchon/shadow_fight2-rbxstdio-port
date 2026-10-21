// MFBNFJGBPBB$$HAKLDDOPIAF @ RVA 0x302F880

System_String_o *
MFBNFJGBPBB__HAKLDDOPIAF(PKHMIGFEJCL_o *HLAGOHADLKH,System_String_o *OOGPLJBADCD,MethodInfo *method)

{
  EILGGBOIMGE_FMFDKGKCBBG_o *pEVar1;
  System_String_o *pSVar2;
  
  if ((DAT_04565d4f & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    DAT_04565d4f = 1;
  }
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pEVar1 = MFBNFJGBPBB__INBNIPOEFGO(HLAGOHADLKH,OOGPLJBADCD,method);
  if (pEVar1 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0312f8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pSVar2 = (System_String_o *)
             (*(pEVar1->klass->vtable)._3_ToString.methodPtr)
                       (pEVar1,(pEVar1->klass->vtable)._3_ToString.method);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

