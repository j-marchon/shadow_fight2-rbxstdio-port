// MGNPHCAAEIO.FGHBAEIKNBF$$DGLJCGNHLIG @ RVA 0x3411728

void MGNPHCAAEIO_FGHBAEIKNBF__DGLJCGNHLIG(MGNPHCAAEIO_FGHBAEIKNBF_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  KMJDCOABCCG_o *__this_00;
  MethodInfo *extraout_x1;
  MGNPHCAAEIO_FGHBAEIKNBF_o *pMVar2;
  System_Collections_Generic_List_KFGGMKHNCGM__o *__this_01;
  int index;
  System_Collections_Generic_List_object__o *__this_02;
  int index_00;
  
  if ((DAT_04568088 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KFGGMKHNCGM>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KFGGMKHNCGM>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568088 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  pMVar2 = MGNPHCAAEIO_TypeInfo->static_fields->AIHLHCIPKJJ;
  if ((pMVar2 != (MGNPHCAAEIO_FGHBAEIKNBF_o *)0x0) &&
     (__this_01 = (pMVar2->fields).BJGBOCFLEGO,
     __this_01 != (System_Collections_Generic_List_KFGGMKHNCGM__o *)0x0)) {
    if (0 < (__this_01->fields)._size) {
      index = 0;
      do {
        pIVar1 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_01,index,
                            Method_System_Collections_Generic_List<KFGGMKHNCGM>_get_Item__);
        if (pIVar1 != (Il2CppObject *)0x0) {
          __this_02 = pIVar1[1].monitor;
          if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03511854;
          if (0 < (__this_02->fields)._size) {
            index_00 = 0;
            do {
              __this_00 = (KMJDCOABCCG_o *)
                          System_Collections_Generic_List<object>__get_Item
                                    (__this_02,index_00,
                                     Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Item__)
              ;
              if (__this_00 == (KMJDCOABCCG_o *)0x0) goto LAB_03511854;
              KMJDCOABCCG__DGLJCGNHLIG(__this_00,(MethodInfo *)0x0);
              index_00 = index_00 + 1;
            } while (index_00 < (__this_02->fields)._size);
          }
        }
        index = index + 1;
      } while (index < (__this_01->fields)._size);
    }
    return;
  }
LAB_03511854:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

