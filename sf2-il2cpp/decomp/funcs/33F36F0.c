// FCJBEKHDLAF$$BBCAMJDDOII @ RVA 0x33F36F0

void FCJBEKHDLAF__BBCAMJDDOII
               (FCJBEKHDLAF_o *__this,OLKKAIFGGAK_EAOIGPODIAI_o *BCHKAEBGKGG,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  PJKHAJKEHEL_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  OLKKAIFGGAK_o *pOVar5;
  MNLIBPAOCLG_o *__this_02;
  PKNBJJPHAKI_o *__this_03;
  Il2CppObject *value;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Fight_ScreenFight_o *pNVar6;
  AFFHKININGD_o *pAVar7;
  MMDDDDFHOLG_o *pMVar8;
  BEPJMNAHCAD_o *pBVar9;
  int32_t HEHMPFLAEGE;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar10;
  float fVar11;
  
  if ((DAT_04567f35 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
    FUN_01bab630(&ECENNHNBAME_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_2968);
    DAT_04567f35 = 1;
  }
  if (((__this->fields).PEELENPNLHJ == 3) && ((__this->fields).EKHKFLJLLHB == false)) {
    __this_00 = FCJBEKHDLAF__MKOHFHJJDFB(__this,true,method);
                    /* try { // try from 034f3778 to 035f380b has its CatchHandler @ 034f3778
                       catch() { ... } // from try @ 034f3778 with catch @ 034f3778
                       catch() { ... } // from try @ 034f3814 with catch @ 034f3778
                       catch() { ... } // from try @ 034f386c with catch @ 034f3778
                       catch() { ... } // from try @ 034f3890 with catch @ 034f3778
                       catch() { ... } // from try @ 034f38c8 with catch @ 034f3778 */
    if (__this_00 == (PJKHAJKEHEL_o *)0x0) goto LAB_034f3acc;
    iVar1 = (__this_00->fields).KNDEADMMCPO;
    if (iVar1 == 2) {
      bVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                         (__this_00->fields).HJPOJOPKEKI.fields,(MethodInfo *)0x0);
      pNVar10 = (__this->fields).HIBPKNAIPLH;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034f380c to 035f3813 has its CatchHandler @ 034f3874 */
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
                    /* try { // try from 034f3814 to 035f3867 has its CatchHandler @ 034f3778 */
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar10,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar3) {
        if (bVar4) {
          pNVar10 = (__this->fields).HIBPKNAIPLH;
          if (pNVar10 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) goto LAB_034f3acc;
          Nekki_SF2_GUI_Fight_PreFight__CreateYouWin(pNVar10,(MethodInfo *)0x0);
        }
      }
      else if (bVar4) {
        pNVar10 = (__this->fields).HIBPKNAIPLH;
        if (pNVar10 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) goto LAB_034f3acc;
        Nekki_SF2_GUI_Fight_PreFight__CreateYouLose(pNVar10,(MethodInfo *)0x0);
      }
    }
    else if (iVar1 == 4) {
      pNVar10 = (__this->fields).HIBPKNAIPLH;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 034f3868 to 035f386b has its CatchHandler @ 034f3870 */
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar10,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
                    /* try { // try from 034f386c to 035f388b has its CatchHandler @ 034f3778 */
      if (bVar3) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034f3868 with catch @ 034f3870
                        */
        pNVar10 = (__this->fields).HIBPKNAIPLH;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034f380c with catch @ 034f3874
                        */
        if (pNVar10 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) goto LAB_034f3acc;
        Nekki_SF2_GUI_Fight_PreFight__CreateRingOut(pNVar10,(MethodInfo *)0x0);
      }
    }
    else if (iVar1 == 3) {
      pNVar10 = (__this->fields).HIBPKNAIPLH;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar10,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar3) {
        pNVar10 = (__this->fields).HIBPKNAIPLH;
        if (pNVar10 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) goto LAB_034f3acc;
        Nekki_SF2_GUI_Fight_PreFight__CreateTimesUp(pNVar10,(MethodInfo *)0x0);
      }
    }
    else {
      pNVar10 = (__this->fields).HIBPKNAIPLH;
                    /* try { // try from 034f388c to 035f388f has its CatchHandler @ 034f38b8 */
                    /* try { // try from 034f3890 to 035f38bf has its CatchHandler @ 034f3778 */
      if ((pNVar10 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) ||
         (pNVar6 = (pNVar10->fields).LJAILGNLPAB, pNVar6 == (Nekki_SF2_GUI_Fight_ScreenFight_o *)0x0
         )) goto LAB_034f3acc;
      if ((pNVar6->fields).Type != 2) {
        bVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                           (__this_00->fields).HJPOJOPKEKI.fields,(MethodInfo *)0x0);
        if (!bVar3) {
          pAVar7 = (__this->fields).FBFPLEFCDOK;
                    /* catch() { ... } // from try @ 034f388c with catch @ 034f38b8 */
          if (pAVar7 == (AFFHKININGD_o *)0x0) goto LAB_034f3acc;
                    /* try { // try from 034f38c0 to 035f38c7 has its CatchHandler @ 034f38dc */
          if ((pAVar7->fields).JDNKKGPNHPB != 0x11) goto LAB_034f39a8;
        }
                    /* try { // try from 034f38c8 to 035f38d3 has its CatchHandler @ 034f3778 */
        if ((__this_00->fields).BOJAPMNFCGF == false) {
          fVar11 = PJKHAJKEHEL__HKHGMJNLHKO(__this_00,(MethodInfo *)0x0);
          if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (fVar11 <= MGNPHCAAEIO_TypeInfo->static_fields->EGFHCOGFCJK) {
            pNVar10 = (__this->fields).HIBPKNAIPLH;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar3 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pNVar10,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (bVar3) {
              pNVar10 = (__this->fields).HIBPKNAIPLH;
              if (pNVar10 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) goto LAB_034f3acc;
              bVar3 = false;
              goto LAB_034f39a0;
            }
          }
        }
        else {
                    /* try { // try from 034f38d4 to 035f38db has its CatchHandler @ 034f38dc */
          pNVar10 = (__this->fields).HIBPKNAIPLH;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034f38c0 with catch @ 034f38dc
                       catch(type#2 @ 00000000) { ... } // from try @ 034f38d4 with catch @ 034f38dc
                        */
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pNVar10,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if (bVar3) {
            pNVar10 = (__this->fields).HIBPKNAIPLH;
            if (pNVar10 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) goto LAB_034f3acc;
            bVar3 = true;
LAB_034f39a0:
            Nekki_SF2_GUI_Fight_PreFight__CreateWinner(pNVar10,bVar3,(MethodInfo *)0x0);
          }
        }
      }
    }
LAB_034f39a8:
    (__this->fields).EKHKFLJLLHB = true;
  }
  if (BCHKAEBGKGG != (OLKKAIFGGAK_EAOIGPODIAI_o *)0x0) {
    value = (BCHKAEBGKGG->fields).KOANCCDDBDA;
    if (value != (Il2CppObject *)0x0) {
      bVar2 = (ECENNHNBAME_TypeInfo->_2).naturalAligment;
      if (((value->klass->_2).naturalAligment < bVar2) ||
         ((value->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)ECENNHNBAME_TypeInfo)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(value);
      }
    }
    pMVar8 = (__this->fields).POEGCOJFMDB;
    if ((pMVar8 != (MMDDDDFHOLG_o *)0x0) &&
       (__this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (pMVar8->fields).KECADJKAJNG,
       __this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      System_Collections_Generic_Dictionary<object,_object>__set_Item
                (__this_01,StringLiteral_2968,value,
                 Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
      pMVar8 = (__this->fields).POEGCOJFMDB;
      if (pMVar8 != (MMDDDDFHOLG_o *)0x0) {
        method_00 = (MethodInfo *)0x1;
        MMDDDDFHOLG__CFEOMJALMBB
                  (pMVar8,(BCHKAEBGKGG->fields).HEMGHNOOJPI,9,true,(NJPBBPOABKP_o *)0x0,
                   (MethodInfo *)0x0);
        pOVar5 = (BCHKAEBGKGG->fields).HEMGHNOOJPI;
        if (pOVar5 != (OLKKAIFGGAK_o *)0x0) {
          bVar3 = OLKKAIFGGAK__HODPOCMNNIN(pOVar5,(MethodInfo *)0x0);
          HEHMPFLAEGE = 1;
          if (!bVar3) {
            HEHMPFLAEGE = 2;
          }
          FCJBEKHDLAF__CPPKPCGDCAJ(__this,4,HEHMPFLAEGE,method_00);
          pOVar5 = (BCHKAEBGKGG->fields).HEMGHNOOJPI;
          if (pOVar5 != (OLKKAIFGGAK_o *)0x0) {
            if ((pOVar5->fields).ONDNEJFKABA != false) {
              return;
            }
            pBVar9 = (__this->fields).FAJCMHDLBEJ;
            if ((pBVar9 != (BEPJMNAHCAD_o *)0x0) &&
               (__this_02 = (pBVar9->fields).LIICCFBEOLC, __this_02 != (MNLIBPAOCLG_o *)0x0)) {
              __this_03 = MNLIBPAOCLG__KLOHNEKNDBL(__this_02,(MethodInfo *)0x0);
              pOVar5 = (BCHKAEBGKGG->fields).HEMGHNOOJPI;
              if ((pOVar5 != (OLKKAIFGGAK_o *)0x0) && (__this_03 != (PKNBJJPHAKI_o *)0x0)) {
                PKNBJJPHAKI__PLJOFBGBAMK
                          (__this_03,(pOVar5->fields).HMIAFJALFCJ,true,(MethodInfo *)0x0);
                pOVar5 = (BCHKAEBGKGG->fields).HEMGHNOOJPI;
                if (pOVar5 != (OLKKAIFGGAK_o *)0x0) {
                  (pOVar5->fields).ONDNEJFKABA = true;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_034f3acc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

