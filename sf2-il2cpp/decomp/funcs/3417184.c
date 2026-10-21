// Nekki.SF2.GUI.Map.InfoBattle$$OnFightButtonClick @ RVA 0x3417184

void Nekki_SF2_GUI_Map_InfoBattle__OnFightButtonClick
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  AFFHKININGD_o *FBFPLEFCDOK;
  Nekki_Utils_GlobalTimer_o *__this_00;
  System_Action_o *AENHHCABJBP;
  System_Action_o *OFNOJDGIDGD;
  System_Collections_Generic_List_object__o *pSVar6;
  NBLEEDEAPHB_o *__this_01;
  FPLOLKHJIAF_o *GOAHBPBJCKC;
  undefined8 uVar7;
  MethodInfo *pMVar8;
  System_Collections_Generic_List_AGCDKMOOJGI__o *pSVar9;
  System_Object_array *pSVar10;
  ACHLOMELAJE_o *pAVar11;
  DNELIPCHKLK_o *DBIAAJNKHLH;
  OHDDKGHEEPA_o *__this_02;
  ADDCOJMHMHE_o AStack_160;
  undefined8 local_d0;
  undefined8 local_c8;
  System_Collections_Generic_List_object__o *local_c0 [2];
  undefined4 local_b0;
  undefined8 local_a8 [3];
  undefined4 local_90;
  undefined1 local_67;
  undefined2 local_66;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_48;
  
  if ((DAT_045680a9 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&FPLOLKHJIAF_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_InfoBattle_HAOKGBLOEFC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_InfoBattle_IINGJLINGAJ__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AGCDKMOOJGI>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NBLEEDEAPHB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&OHDDKGHEEPA_TypeInfo);
    FUN_01bab630(&StringLiteral_17779);
    FUN_01bab630(&StringLiteral_16970);
    FUN_01bab630(&StringLiteral_21623);
    FUN_01bab630(&StringLiteral_17835);
    FUN_01bab630(&StringLiteral_16973);
    FUN_01bab630(&StringLiteral_1);
    DAT_045680a9 = 1;
  }
  pMVar8 = (MethodInfo *)0x90;
  memset(&local_d0,0,0x90);
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  MGNPHCAAEIO_TypeInfo->static_fields->JOJJNOGLNCD = false;
  DBIAAJNKHLH = (__this->fields).AABIECAIFGA;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  FBFPLEFCDOK = NLPJLHOEAOE__OJDOCBFHNBN(DBIAAJNKHLH,(MethodInfo *)0x0);
  if (FBFPLEFCDOK == (AFFHKININGD_o *)0x0) {
    return;
  }
  iVar1 = (FBFPLEFCDOK->fields).JDNKKGPNHPB;
  if (iVar1 != 0x14) {
    if (iVar1 != 7) {
      Nekki_SF2_GUI_Map_InfoBattle__EEGOPNGLBMJ
                ((Nekki_SF2_GUI_Map_InfoBattle_o *)FBFPLEFCDOK,FBFPLEFCDOK,pMVar8);
      return;
    }
    bVar5 = IEICNBBBNEJ__EHLKEFJNKPA((MethodInfo *)0x0);
    if (!bVar5) {
      JJPNLEPEAFM__LJMGKILCNBI((MethodInfo *)0x0);
      return;
    }
    if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = Nekki_Utils_GlobalTimer__get_Instance((MethodInfo *)0x0);
    AENHHCABJBP = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    OFNOJDGIDGD = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (__this_00 != (Nekki_Utils_GlobalTimer_o *)0x0) {
      Nekki_Utils_GlobalTimer__ServerTimeSync(__this_00,AENHHCABJBP,OFNOJDGIDGD,(MethodInfo *)0x0);
      return;
    }
LAB_03517720:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this_02 = (OHDDKGHEEPA_o *)(FBFPLEFCDOK->fields).IFJLLGPGMHM;
  if (__this_02 == (OHDDKGHEEPA_o *)0x0) goto LAB_03517720;
  bVar2 = (OHDDKGHEEPA_TypeInfo->_2).naturalAligment;
  if (((__this_02->klass->_2).naturalAligment < bVar2) ||
     ((__this_02->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)OHDDKGHEEPA_TypeInfo)
     ) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(__this_02);
  }
  bVar5 = OHDDKGHEEPA__EPLDDILOPAJ(__this_02,FBFPLEFCDOK,(MethodInfo *)0x0);
  if (bVar5) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar11 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar11 != (ACHLOMELAJE_o *)0x0) &&
       (pSVar9 = (FBFPLEFCDOK->fields).HFDOEONIBFA,
       pSVar9 != (System_Collections_Generic_List_AGCDKMOOJGI__o *)0x0)) {
      if (((pAVar11->fields).PEMALCKKLIF == false) || ((pSVar9->fields)._size == 0)) {
        JJPNLEPEAFM__NFKLNBFKKLF(__this_02,(MethodInfo *)0x0);
        return;
      }
      memset(&local_c8,0,0x88);
      local_d0 = StringLiteral_16973;
      thunk_FUN_01c20e04(&local_d0);
      local_c8 = StringLiteral_16970;
      thunk_FUN_01c20e04(&local_c8);
      pSVar6 = (System_Collections_Generic_List_object__o *)
               thunk_FUN_01bda818(System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                (pSVar6,Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
      __this_01 = (NBLEEDEAPHB_o *)thunk_FUN_01bda818(NBLEEDEAPHB_TypeInfo);
      NBLEEDEAPHB___ctor(__this_01,StringLiteral_21623,StringLiteral_1,StringLiteral_1,
                         StringLiteral_1,0,-1,(IGFGDDANEPE_o *)0x0,(LBMOOFGGPEB_o *)0x0,0,
                         (AMJMGFCCAKN_o *)0x0,(MethodInfo *)0x0);
      lVar4 = Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__;
      if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
        pSVar10 = (pSVar6->fields)._items;
        (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
        if (pSVar10 != (System_Object_array *)0x0) {
          uVar3 = (pSVar6->fields)._size;
          if (uVar3 < (uint)pSVar10->max_length) {
            (pSVar6->fields)._size = uVar3 + 1;
            pSVar10->m_Items[(int)uVar3] = (Il2CppObject *)__this_01;
            thunk_FUN_01c20e04(pSVar10->m_Items + (int)uVar3,__this_01);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (pSVar6,(Il2CppObject *)__this_01,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          local_c0[0] = pSVar6;
          thunk_FUN_01c20e04(local_c0,pSVar6);
          local_b0 = 0xbf800000;
          uVar7 = thunk_FUN_01bda818(System_Action<object>_TypeInfo);
          System_Action<object>___ctor();
          local_48 = uVar7;
          thunk_FUN_01c20e04(&local_48,uVar7);
          local_a8[0] = StringLiteral_17835;
          thunk_FUN_01c20e04(local_a8);
          local_60 = StringLiteral_17779;
          local_90 = 5;
          local_66 = 1;
          thunk_FUN_01c20e04(&local_60);
          local_67 = 1;
          local_58 = 0x42c80000;
          memcpy(&AStack_160,&local_d0,0x90);
          JJPNLEPEAFM__NMHCCGPELBE(&AStack_160,(MethodInfo *)0x0);
          return;
        }
      }
    }
    goto LAB_03517720;
  }
  pSVar6 = (System_Collections_Generic_List_object__o *)
           (*(FBFPLEFCDOK->klass->vtable)._4_NIKCNPMKAFK.methodPtr)
                     (FBFPLEFCDOK,(FBFPLEFCDOK->klass->vtable)._4_NIKCNPMKAFK.method);
  if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03517720;
  if ((pSVar6->fields)._size == 0) {
    return;
  }
  pMVar8 = Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__;
  GOAHBPBJCKC = (FPLOLKHJIAF_o *)
                System_Collections_Generic_List<object>__get_Item
                          (pSVar6,0,(MethodInfo_26E4ADC *)
                                    Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__);
  if (GOAHBPBJCKC != (FPLOLKHJIAF_o *)0x0) {
    bVar2 = (FPLOLKHJIAF_TypeInfo->_2).naturalAligment;
    if (bVar2 <= (((Il2CppClass *)GOAHBPBJCKC->klass)->_2).naturalAligment) {
      if ((((Il2CppClass *)GOAHBPBJCKC->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          (Il2CppClass *)FPLOLKHJIAF_TypeInfo) {
        GOAHBPBJCKC = (FPLOLKHJIAF_o *)0x0;
      }
      goto LAB_03517700;
    }
  }
  GOAHBPBJCKC = (FPLOLKHJIAF_o *)0x0;
LAB_03517700:
  Nekki_SF2_GUI_Map_InfoBattle__GEDBBEMEAKB(__this,GOAHBPBJCKC,pMVar8);
  return;
}

