// TypeDefIndex 2468
// Namespace: 
// public class BAOGEGACLOH : OHPOFOPJIMB
// Fields:
//   private RaidSeasonFinishDialog ILCGLGPADOK; // 0x20
//   private NLBPJNEGNNM MAIMCOJJJCM; // 0x28
//   private List<string> JDBNPCMFLOF; // 0x30

// ===== public override void IKDPMKOIDMP()  [RVA 0x3370BD4]
// BAOGEGACLOH$$IKDPMKOIDMP @ RVA 0x3370BD4

void BAOGEGACLOH__IKDPMKOIDMP(BAOGEGACLOH_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  NFFDIPBFJHP_o *pNVar3;
  EEGDOGKBLNG_o *pEVar4;
  PLIIGOCLJDL_o *pPVar5;
  CFEJGBOOCOG_o *pCVar6;
  VirtualInvokeData *pVVar7;
  long lVar8;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_o *pNVar9;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  GLPEFEEGCPM_o *pGVar10;
  FADHMEJJCPO_o *pFVar11;
  CFEJGBOOCOG_c *pCVar12;
  ACHLOMELAJE_o *pAVar13;
  LPAPAMPGDFN_o *pLVar14;
  ulong uVar15;
  int32_t *piVar16;
  
  if ((DAT_04567b21 & 1) == 0) {
    FUN_01bab630(&CFEJGBOOCOG_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_21870/*"use complete - exists important story quests"*/);
    DAT_04567b21 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pNVar3 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
  if (pNVar3 != (NFFDIPBFJHP_o *)0x0) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar3 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
    if (pNVar3 == (NFFDIPBFJHP_o *)0x0) goto LAB_03470ef4;
    if ((pNVar3->fields)._OHJMKJNDJPN_k__BackingField != (GLPEFEEGCPM_o *)0x0) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar3 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
      if ((pNVar3 == (NFFDIPBFJHP_o *)0x0) ||
         (pGVar10 = (pNVar3->fields)._OHJMKJNDJPN_k__BackingField, pGVar10 == (GLPEFEEGCPM_o *)0x0))
      goto LAB_03470ef4;
      if ((pGVar10->fields).PBBGNHKFEPG != (FADHMEJJCPO_o *)0x0) {
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pEVar4 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        pNVar3 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
        if ((((pNVar3 == (NFFDIPBFJHP_o *)0x0) ||
             (pGVar10 = (pNVar3->fields)._OHJMKJNDJPN_k__BackingField,
             pGVar10 == (GLPEFEEGCPM_o *)0x0)) ||
            (pFVar11 = (pGVar10->fields).PBBGNHKFEPG, pFVar11 == (FADHMEJJCPO_o *)0x0)) ||
           (pEVar4 == (EEGDOGKBLNG_o *)0x0)) goto LAB_03470ef4;
        (pEVar4->fields)._DHPJJLCDAJD_k__BackingField = (pFVar11->fields).PDOMCPONBNB;
        pPVar5 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
        if (pPVar5 == (PLIIGOCLJDL_o *)0x0) goto LAB_03470ef4;
        PLIIGOCLJDL__HBBDJMCMNDE(pPVar5,(MethodInfo *)0x0);
        pPVar5 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
        if (pPVar5 == (PLIIGOCLJDL_o *)0x0) goto LAB_03470ef4;
        PLIIGOCLJDL__MJFIDBMOKCM(pPVar5,(MethodInfo *)0x0);
      }
    }
  }
                    /* try { // try from 03470d2c to 03570deb has its CatchHandler @ 03470d2c
                       catch() { ... } // from try @ 03470d2c with catch @ 03470d2c
                       catch() { ... } // from try @ 03470e14 with catch @ 03470d2c
                       catch() { ... } // from try @ 03470e68 with catch @ 03470d2c
                       catch() { ... } // from try @ 03470ea8 with catch @ 03470d2c */
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pCVar6 = IFAMAAGNCBJ__OBKGLDJEIDN((MethodInfo *)0x0);
  if (pCVar6 != (CFEJGBOOCOG_o *)0x0) {
    pCVar12 = pCVar6->klass;
    uVar1._0_1_ = (pCVar12->_2).rank;
    uVar1._1_1_ = (pCVar12->_2).minimumAlignment;
    uVar15 = (ulong)uVar1;
    if (uVar15 != 0) {
      piVar16 = &((pCVar12->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
            (Il2CppClass *)CFEJGBOOCOG_TypeInfo) {
          pVVar7 = pCVar12->vtable + (*piVar16 + 1);
          goto LAB_03470d9c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    pVVar7 = (VirtualInvokeData *)FUN_01b81914(pCVar6,CFEJGBOOCOG_TypeInfo,1);
LAB_03470d9c:
    lVar8 = (*pVVar7->methodPtr)(pCVar6,pVVar7->method);
    if (lVar8 != 0) {
      if (*(char *)(lVar8 + 0x40) == '\0') {
        __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
        if (__this_00 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_03470ef4;
        bVar2 = Nekki_SF2_Core_Quests_QuestsManager__ExistsQuestsWithActOrShowVideoAction
                          (__this_00,(MethodInfo *)0x0);
        if (bVar2) {
          KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_21870/*"use complete - exists important story quests"*/,(MethodInfo *)0x0);
        }
        else {
                    /* try { // try from 03470dec to 03570df3 has its CatchHandler @ 03470e4c */
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03470dfc to 03570e13 has its CatchHandler @ 03470e48 */
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b7d == '\0') {
                    /* try { // try from 03470e14 to 03570e63 has its CatchHandler @ 03470d2c */
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pAVar13 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if ((pAVar13 == (ACHLOMELAJE_o *)0x0) ||
             (pLVar14 = (pAVar13->fields).LMCDOMHENMC, pLVar14 == (LPAPAMPGDFN_o *)0x0))
          goto LAB_03470ef4;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03470dfc with catch @ 03470e48
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03470dec with catch @ 03470e4c
                        */
          if ((pLVar14->fields).AMIMEMOELHE == 0x32) {
                    /* try { // try from 03470e64 to 03570e67 has its CatchHandler @ 03470e90 */
            if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03470e68 to 03570e9f has its CatchHandler @ 03470d2c */
              thunk_FUN_01ba7564();
            }
            if (DAT_04565ff1 == '\0') {
              FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
              DAT_04565ff1 = '\x01';
            }
                    /* catch() { ... } // from try @ 03470e64 with catch @ 03470e90 */
            if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
                    /* try { // try from 03470ea0 to 03570ea7 has its CatchHandler @ 03470ebc */
                    /* try { // try from 03470ea8 to 03570eb3 has its CatchHandler @ 03470d2c */
            if (NJNCPNBIPCD_TypeInfo->static_fields->_EGONDPGBNLJ_k__BackingField == false) {
              JJPNLEPEAFM__HMBOKGADCGK((MethodInfo *)0x0);
              pNVar9 = JJPNLEPEAFM__BAPCFKAPNEK((__this->fields).MAIMCOJJJCM,(MethodInfo *)0x0);
              (__this->fields).ILCGLGPADOK = pNVar9;
              thunk_FUN_01c20e04();
              BAOGEGACLOH__BPHLFABNOLH(__this,method_00);
              return;
            }
          }
        }
      }
                    /* try { // try from 03470eb4 to 03570ebb has its CatchHandler @ 03470ebc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03470ea0 with catch @ 03470ebc
                       catch(type#2 @ 00000000) { ... } // from try @ 03470eb4 with catch @ 03470ebc
                        */
      OHPOFOPJIMB__FGNINNOOCCL((OHPOFOPJIMB_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03470ef4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OOKADHFLHDH(object IMMNELPBGIF)  [RVA 0x3371454]
// BAOGEGACLOH$$OOKADHFLHDH @ RVA 0x3371454

void BAOGEGACLOH__OOKADHFLHDH(BAOGEGACLOH_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  MEMHEPBAJJA_HIAEDCDJJDJ_Fields *pMVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  ACHLOMELAJE_o *__this_00;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar6;
  System_Collections_Generic_List_NBLEEDEAPHB__o *IJIPABLCAKE;
  System_String_o *pSVar7;
  NBLEEDEAPHB_o *__this_01;
  System_Action_T__o *IELDNEAAPBE;
  System_Action_object__o *BLMFLPJJMPF;
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this_02;
  Il2CppObject *extraout_x1;
  Il2CppObject *extraout_x1_00;
  Il2CppObject *extraout_x1_01;
  System_Collections_Generic_List_string__o *pSVar8;
  NBLEEDEAPHB_array *pNVar9;
  System_String_o *CADMJIKLNCN;
  Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_o *pNVar10;
  
  if ((DAT_04567b22 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_BAOGEGACLOH_KKAHPNPCKCG__);
    FUN_01bab630(&Method_BAOGEGACLOH_OOKADHFLHDH__);
                    /* try { // try from 034714a4 to 0357168f has its CatchHandler @ 034714a4
                       catch() { ... } // from try @ 034714a4 with catch @ 034714a4
                       catch() { ... } // from try @ 03471920 with catch @ 034714a4
                       catch() { ... } // from try @ 034719a4 with catch @ 034714a4
                       catch() { ... } // from try @ 03471a18 with catch @ 034714a4
                       catch() { ... } // from try @ 03471a4c with catch @ 034714a4
                       catch() { ... } // from try @ 03471ab8 with catch @ 034714a4
                       catch() { ... } // from try @ 03471b04 with catch @ 034714a4
                       catch() { ... } // from try @ 03471b40 with catch @ 034714a4
                       catch() { ... } // from try @ 03471b80 with catch @ 034714a4 */
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
    FUN_01bab630(&NBLEEDEAPHB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_RemoveEventListener__);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_22500/*"}"*/);
    FUN_01bab630(&StringLiteral_21622/*"txtBossAvailable{"*/);
    FUN_01bab630(&StringLiteral_15923/*"_Avatar_Notification"*/);
    FUN_01bab630(&StringLiteral_16973/*"character_sensei"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567b22 = 1;
    IMMNELPBGIF = extraout_x1;
  }
  pSVar8 = (__this->fields).JDBNPCMFLOF;
  if (pSVar8 != (System_Collections_Generic_List_string__o *)0x0) {
    if ((pSVar8->fields)._size == 0) {
                    /* try { // try from 03471714 to 0357171f has its CatchHandler @ 03471a6c */
      pNVar10 = (__this->fields).ILCGLGPADOK;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,IMMNELPBGIF);
      }
                    /* try { // try from 03471734 to 0357173b has its CatchHandler @ 03471a70 */
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar10,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar5) {
                    /* try { // try from 03471744 to 03571753 has its CatchHandler @ 03471a60 */
        pNVar10 = (__this->fields).ILCGLGPADOK;
        IELDNEAAPBE = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
        System_Action<object>___ctor();
        if (pNVar10 == (Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_o *)0x0)
        goto LAB_034718a4;
        Nekki_SF2_GUI_SFMonoBehaviour<object>__RemoveEventListener
                  ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)pNVar10,0,IELDNEAAPBE,
                   Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_RemoveEventListener__);
      }
                    /* try { // try from 03471794 to 0357179b has its CatchHandler @ 03471a74 */
      OHPOFOPJIMB__FGNINNOOCCL((OHPOFOPJIMB_o *)__this,(MethodInfo *)0x0);
      return;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,IMMNELPBGIF);
      IMMNELPBGIF = extraout_x1_00;
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
      IMMNELPBGIF = extraout_x1_01;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,IMMNELPBGIF);
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 != (ACHLOMELAJE_o *)0x0) {
      pMVar6 = ACHLOMELAJE__HHLHDCPKLON(__this_00,StringLiteral_15923/*"_Avatar_Notification"*/,(MethodInfo *)0x0);
      pMVar1 = (MEMHEPBAJJA_HIAEDCDJJDJ_Fields *)&StringLiteral_16973/*"character_sensei"*/;
      if (pMVar6 != (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) {
        pMVar1 = &pMVar6->fields;
      }
      CADMJIKLNCN = pMVar1->JAICMIMBIOA;
      IJIPABLCAKE = (System_Collections_Generic_List_NBLEEDEAPHB__o *)
                    thunk_FUN_01bda818(System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
                 Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
      pSVar8 = (__this->fields).JDBNPCMFLOF;
      if (pSVar8 != (System_Collections_Generic_List_string__o *)0x0) {
        pSVar7 = (System_String_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar8,
                            (pSVar8->fields)._size + -1,
                            Method_System_Collections_Generic_List<string>_get_Item__);
        pSVar7 = System_String__Concat
                           (StringLiteral_21622/*"txtBossAvailable{"*/,pSVar7,StringLiteral_22500/*"}"*/,(MethodInfo *)0x0);
        __this_01 = (NBLEEDEAPHB_o *)thunk_FUN_01bda818(NBLEEDEAPHB_TypeInfo);
                    /* try { // try from 03471690 to 03571697 has its CatchHandler @ 03471a98 */
                    /* try { // try from 034716ac to 035716b3 has its CatchHandler @ 03471a7c */
        NBLEEDEAPHB___ctor(__this_01,pSVar7,StringLiteral_1/*""*/,StringLiteral_1/*""*/,StringLiteral_1/*""*/,0,-1,
                           (IGFGDDANEPE_o *)0x0,(LBMOOFGGPEB_o *)0x0,0,(AMJMGFCCAKN_o *)0x0,
                           (MethodInfo *)0x0);
        lVar4 = Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__;
                    /* try { // try from 034716c0 to 035716c7 has its CatchHandler @ 03471a8c */
        if (IJIPABLCAKE != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
          pNVar9 = (IJIPABLCAKE->fields)._items;
          (IJIPABLCAKE->fields)._version = (IJIPABLCAKE->fields)._version + 1;
          if (pNVar9 != (NBLEEDEAPHB_array *)0x0) {
            uVar3 = (IJIPABLCAKE->fields)._size;
            if (uVar3 < (uint)pNVar9->max_length) {
              (IJIPABLCAKE->fields)._size = uVar3 + 1;
              pNVar9->m_Items[(int)uVar3] = __this_01;
              thunk_FUN_01c20e04(pNVar9->m_Items + (int)uVar3,__this_01);
            }
            else {
                    /* try { // try from 034717ac to 035717b3 has its CatchHandler @ 03471a6c */
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
                         (Il2CppObject *)__this_01,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70))
              ;
            }
                    /* try { // try from 034717c4 to 035717c7 has its CatchHandler @ 03471a74 */
            pSVar8 = (__this->fields).JDBNPCMFLOF;
            if (pSVar8 != (System_Collections_Generic_List_string__o *)0x0) {
              iVar2 = (pSVar8->fields)._size;
              BLMFLPJJMPF = (System_Action_object__o *)
                            thunk_FUN_01bda818(System_Action<object>_TypeInfo);
              if (iVar2 < 2) {
                    /* try { // try from 034717e8 to 035717ef has its CatchHandler @ 03471b14 */
                System_Action<object>___ctor();
              }
              else {
                    /* try { // try from 03471804 to 0357180f has its CatchHandler @ 03471b20 */
                    /* try { // try from 03471818 to 03571827 has its CatchHandler @ 03471b1c */
                System_Action<object>___ctor();
                pSVar8 = (__this->fields).JDBNPCMFLOF;
                if (pSVar8 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_034718a4;
                System_Collections_Generic_List<object>__RemoveAt
                          ((System_Collections_Generic_List_object__o *)pSVar8,
                           (pSVar8->fields)._size + -1,
                           Method_System_Collections_Generic_List<string>_RemoveAt__);
              }
              __this_02 = Nekki_SF2_GUI_Dialogs_NotificationsGame__get_Instance((MethodInfo *)0x0);
              if (__this_02 != (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) {
                    /* try { // try from 03471868 to 03571883 has its CatchHandler @ 03471b18 */
                Nekki_SF2_GUI_Dialogs_NotificationsGame__OpenNotification
                          (__this_02,CADMJIKLNCN,IJIPABLCAKE,BLMFLPJJMPF,StringLiteral_9679/*"OK"*/,1,0.0,0,
                           false,true,1.0,(System_String_o *)0x0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_034718a4:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034718a4 to 035718ab has its CatchHandler @ 03471a58 */
  FUN_01bab8c8();
}


// ===== private void BPHLFABNOLH()  [RVA 0x3370F00]
// BAOGEGACLOH$$BPHLFABNOLH @ RVA 0x3370F00

void BAOGEGACLOH__BPHLFABNOLH(BAOGEGACLOH_o *__this,MethodInfo *method)

{
  NLBPJNEGNNM_o *pNVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04567b23 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&Method_BAOGEGACLOH_KKAHPNPCKCG__);
    FUN_01bab630(&Method_BAOGEGACLOH_OOKADHFLHDH__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_get_Current__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&OHDDKGHEEPA_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    auVar2 = FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    DAT_04567b23 = 1;
  }
  pNVar1 = (__this->fields).MAIMCOJJJCM;
  if ((pNVar1 != (NLBPJNEGNNM_o *)0x0) && ((pNVar1->fields).PMMFPJJOPKE != (HCFOFHGNBKP_o *)0x0)) {
    FUN_03f93678();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public override bool BNNIDPDMOIL()  [RVA 0x33718A8]
// BAOGEGACLOH$$BNNIDPDMOIL @ RVA 0x33718A8

bool BAOGEGACLOH__BNNIDPDMOIL(BAOGEGACLOH_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  NDPMLPGANCI_o *pNVar3;
  
  pNVar3 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pNVar3 != (NDPMLPGANCI_o *)0x0) {
                    /* try { // try from 034718b8 to 035718c3 has its CatchHandler @ 03471a50 */
    bVar1 = NDPMLPGANCI__FHLFKIOFBKL(pNVar3,(MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = false;
    }
    else {
      pNVar3 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pNVar3 == (NDPMLPGANCI_o *)0x0) goto LAB_034718f0;
      iVar2 = NDPMLPGANCI__FFIOCEOHPEM(pNVar3,(MethodInfo *)0x0);
      bVar1 = iVar2 == 5;
    }
    return bVar1;
  }
LAB_034718f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KKAHPNPCKCG(object HBHPFKJMGCK)  [RVA 0x3370EF8]
// BAOGEGACLOH$$KKAHPNPCKCG @ RVA 0x3370EF8

void BAOGEGACLOH__KKAHPNPCKCG(BAOGEGACLOH_o *__this,Il2CppObject *HBHPFKJMGCK,MethodInfo *method)

{
  OHPOFOPJIMB__FGNINNOOCCL((OHPOFOPJIMB_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor(NLBPJNEGNNM FGHHCGFBDKF)  [RVA 0x33718F4]
// BAOGEGACLOH$$.ctor @ RVA 0x33718F4

void BAOGEGACLOH___ctor(BAOGEGACLOH_o *__this,NLBPJNEGNNM_o *FGHHCGFBDKF,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_string__o **ppSVar1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_o **ppNVar2;
  NLBPJNEGNNM_o **ppNVar3;
  
                    /* try { // try from 03471904 to 0357191f has its CatchHandler @ 03471a54 */
                    /* try { // try from 03471920 to 03571987 has its CatchHandler @ 034714a4 */
  if ((DAT_04567b24 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04567b24 = 1;
  }
  __this_00 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar1 = &(__this->fields).JDBNPCMFLOF;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  OHPOFOPJIMB___ctor((OHPOFOPJIMB_o *)__this,0,0,(MethodInfo *)0x0);
  ppNVar2 = &(__this->fields).ILCGLGPADOK;
  *ppNVar2 = (Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_o *)0x0;
                    /* try { // try from 03471988 to 0357198f has its CatchHandler @ 03471a9c */
  thunk_FUN_01c20e04(ppNVar2,0);
  ppNVar3 = &(__this->fields).MAIMCOJJJCM;
  *ppNVar3 = FGHHCGFBDKF;
                    /* try { // try from 0347199c to 035719a3 has its CatchHandler @ 03471a94 */
                    /* try { // try from 034719a4 to 035719ff has its CatchHandler @ 034714a4 */
  thunk_FUN_01c20e04(ppNVar3,FGHHCGFBDKF);
  return;
}

