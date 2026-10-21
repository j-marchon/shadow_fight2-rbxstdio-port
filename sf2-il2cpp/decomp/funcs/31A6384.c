// Nekki.SF2.GUI.Profile.TrickSubItem$$GetBaseDMG @ RVA 0x31A6384

System_Collections_Generic_List_float__o *
Nekki_SF2_GUI_Profile_TrickSubItem__GetBaseDMG
          (Nekki_SF2_GUI_Profile_TrickSubItem_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  int32_t iVar4;
  System_Collections_Generic_List_float__o *__this_00;
  JADGCGOJLJB_o *__this_01;
  MDAPDLLMOMF_o *__this_02;
  MethodInfo *extraout_x1;
  KCLPNDAPADO_o *pKVar5;
  ECENNHNBAME_o *pEVar6;
  ECENNHNBAME_HJPFANEPGJF_o *pEVar7;
  System_Single_array *pSVar8;
  System_Collections_Generic_List_JADGCGOJLJB__o *__this_03;
  int index;
  float item;
  
  if ((DAT_04566b0f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<float>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<float>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<float>_TypeInfo);
    FUN_01bab630(&MDAPDLLMOMF_TypeInfo);
    DAT_04566b0f = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_float__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<float>_TypeInfo,method);
                    /* try { // try from 032a640c to 033a6433 has its CatchHandler @ 032a65f0 */
  System_Collections_Generic_List<float>___ctor
            (__this_00,Method_System_Collections_Generic_List<float>__ctor__);
  pKVar5 = (__this->fields).MGHHBGMPDEI;
  if (pKVar5 != (KCLPNDAPADO_o *)0x0) {
    pEVar6 = (pKVar5->fields).FLIONKHMLLB;
    if (pEVar6 != (ECENNHNBAME_o *)0x0) {
      pEVar7 = (pEVar6->fields).DMGLMCBIAGL;
      if ((pEVar7 == (ECENNHNBAME_HJPFANEPGJF_o *)0x0) ||
         (__this_03 = (pEVar7->fields).GLFJDDHEMNO,
         __this_03 == (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0)) goto LAB_032a6548;
      if (0 < (__this_03->fields)._size) {
        index = 0;
        do {
                    /* try { // try from 032a6468 to 033a6493 has its CatchHandler @ 032a65ec */
          __this_01 = (JADGCGOJLJB_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_03,index,
                                 Method_System_Collections_Generic_List<JADGCGOJLJB>_get_Item__);
          if (__this_01 == (JADGCGOJLJB_o *)0x0) goto LAB_032a6548;
          iVar4 = JADGCGOJLJB__NHGGBEACKBD(__this_01,(MethodInfo *)0x0);
          if (iVar4 == 4) {
            __this_02 = (MDAPDLLMOMF_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)__this_03,index,
                                   Method_System_Collections_Generic_List<JADGCGOJLJB>_get_Item__);
            if (__this_02 == (MDAPDLLMOMF_o *)0x0) goto LAB_032a6548;
            bVar1 = (MDAPDLLMOMF_TypeInfo->_2).naturalAligment;
            if (((__this_02->klass->_2).naturalAligment < bVar1) ||
               ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)MDAPDLLMOMF_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64();
            }
                    /* try { // try from 032a64c4 to 033a64cf has its CatchHandler @ 032a65e0 */
            item = MDAPDLLMOMF__OBAJCBOGFFM(__this_02,(MethodInfo *)0x0);
            lVar3 = Method_System_Collections_Generic_List<float>_Add__;
            if (__this_00 == (System_Collections_Generic_List_float__o *)0x0) goto LAB_032a6548;
            pSVar8 = (__this_00->fields)._items;
            (__this_00->fields)._version = (__this_00->fields)._version + 1;
            if (pSVar8 == (System_Single_array *)0x0) goto LAB_032a6548;
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pSVar8->max_length) {
              (__this_00->fields)._size = uVar2 + 1;
              pSVar8->m_Items[(int)uVar2] = item;
            }
            else {
                    /* try { // try from 032a6514 to 033a652f has its CatchHandler @ 032a65dc */
              System_Collections_Generic_List<float>__AddWithResize
                        (__this_00,item,
                         *(MethodInfo_2703A5C **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
          index = index + 1;
        } while (index < (__this_03->fields)._size);
      }
    }
                    /* try { // try from 032a6530 to 033a65bb has its CatchHandler @ 032a6320 */
    return __this_00;
  }
LAB_032a6548:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

