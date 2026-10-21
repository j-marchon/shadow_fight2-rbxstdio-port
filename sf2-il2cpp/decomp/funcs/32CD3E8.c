// BOFEMGGNODC$$EDMJCPEGFOC @ RVA 0x32CD3E8

bool BOFEMGGNODC__EDMJCPEGFOC(BOFEMGGNODC_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  FCJBEKHDLAF_o *pFVar2;
  System_Collections_Generic_List_OLKKAIFGGAK__o *pSVar3;
  Nekki_SF2_Core_Fights_Controls_GameController_o *x;
  
  if ((DAT_0456752a & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Count__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456752a = 1;
    method = extraout_x1;
  }
  if (DAT_04565c84 == '\0') {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo,method);
    DAT_04565c84 = '\x01';
  }
  x = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7f == '\0') {
      FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
      DAT_04565b7f = '\x01';
    }
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO != (FCJBEKHDLAF_o *)0x0) {
      if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7f == '\0') {
        FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
        DAT_04565b7f = '\x01';
      }
      if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pFVar2 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
      if ((pFVar2 != (FCJBEKHDLAF_o *)0x0) &&
         (pSVar3 = (pFVar2->fields).IILLHHPGGKA,
         pSVar3 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0)) {
        return 0 < (pSVar3->fields)._size;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return false;
}

