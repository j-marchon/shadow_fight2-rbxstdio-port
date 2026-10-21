// EPFMFHDGMCE$$HDEDNKMEFDN @ RVA 0x3536F64

HEFOANCOHDC_o *
EPFMFHDGMCE__HDEDNKMEFDN(EPFMFHDGMCE_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar1;
  HEFOANCOHDC_o *pHVar2;
  System_String_o *extraout_x1;
  FOKJBDHLIMG_o *pFVar3;
  
  if ((DAT_04568a98 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568a98 = 1;
    KGLJICLJHEL = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,KGLJICLJHEL);
  }
  pFVar3 = MGNPHCAAEIO_TypeInfo->static_fields->DDMMFEDBMCC;
  if ((pFVar3 != (FOKJBDHLIMG_o *)0x0) &&
     (pSVar1 = (pFVar3->fields).CNLHOAHDHCF,
     pSVar1 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0)) {
    pHVar2 = (HEFOANCOHDC_o *)
             FUN_03f936b8(pSVar1,Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__
                         );
    return pHVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

