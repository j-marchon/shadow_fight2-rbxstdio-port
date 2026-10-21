// BEPJMNAHCAD$$MCEBBHDMEAE @ RVA 0x3189838

void BEPJMNAHCAD__MCEBBHDMEAE(BEPJMNAHCAD_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  MNLIBPAOCLG_o *pMVar1;
  PKNBJJPHAKI_o *__this_00;
  System_Collections_Generic_List_OLKKAIFGGAK__o *pSVar2;
  OLKKAIFGGAK_o *BCKBBGCOMJD;
  
  if ((DAT_04566a03 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
    DAT_04566a03 = 1;
  }
  pMVar1 = (__this->fields).LIICCFBEOLC;
  if ((pMVar1 != (MNLIBPAOCLG_o *)0x0) &&
     (__this_00 = MNLIBPAOCLG__KLOHNEKNDBL(pMVar1,(MethodInfo *)0x0),
     __this_00 != (PKNBJJPHAKI_o *)0x0)) {
    PKNBJJPHAKI__HMDJFLDLPMN(__this_00,DPJIDNBJIBG,(MethodInfo *)0x0);
    pSVar2 = (__this->fields).EHJHKEEDKBE;
    if (pSVar2 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
      pMVar1 = (__this->fields).LIICCFBEOLC;
      BCKBBGCOMJD = (OLKKAIFGGAK_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar2,DPJIDNBJIBG,
                               Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
      if (pMVar1 != (MNLIBPAOCLG_o *)0x0) {
        MNLIBPAOCLG__BALEGGJGENM(pMVar1,BCKBBGCOMJD,(MethodInfo *)0x0);
        pSVar2 = (__this->fields).EHJHKEEDKBE;
        if (pSVar2 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
          System_Collections_Generic_List<object>__RemoveAt
                    ((System_Collections_Generic_List_object__o *)pSVar2,DPJIDNBJIBG,
                     Method_System_Collections_Generic_List<OLKKAIFGGAK>_RemoveAt__);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

