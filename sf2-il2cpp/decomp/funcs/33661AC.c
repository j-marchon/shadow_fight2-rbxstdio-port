// CJFBGEEIPBA$$LOMFAPMIBFE @ RVA 0x33661AC

void CJFBGEEIPBA__LOMFAPMIBFE(CJFBGEEIPBA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int32_t iVar4;
  NLFLMJPNOLF_o *AOMBONOOJFP;
  CHDGOFBHAFI_o *__this_00;
  long lVar5;
  CNLGMNIEGFG_o *pCVar6;
  EEGDOGKBLNG_o *__this_01;
  EEOMEMBBGNA_o *__this_02;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_03;
  int64_t PEJIFIIDFMM;
  MGDJPGGPDJI_o *pMVar7;
  NBLEEDEAPHB_o *__this_04;
  System_String_o *pSVar8;
  System_Collections_Generic_List_NBLEEDEAPHB__o *IJIPABLCAKE;
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o *pNVar9;
  System_Action_object__o *BLMFLPJJMPF;
  NBLEEDEAPHB_array *pNVar10;
  UnityEngine_Object_o *x;
  OHDDKGHEEPA_o *__this_05;
  OJEHKJHEBID_o *PBNPKBJKFHE;
  System_String_o **ppSVar11;
  
  if ((DAT_04567abc & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_CJFBGEEIPBA_DBLCCGALPLM__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<NLFLMJPNOLF>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
    FUN_01bab630(&NBLEEDEAPHB_TypeInfo);
    FUN_01bab630(&OHDDKGHEEPA_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__);
    FUN_01bab630(&StringLiteral_17053);
    FUN_01bab630(&StringLiteral_22501);
    FUN_01bab630(&StringLiteral_10875);
    FUN_01bab630(&StringLiteral_16735);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567abc = 1;
  }
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_17053,(MethodInfo *)0x0);
    return;
  }
  AOMBONOOJFP = (NLFLMJPNOLF_o *)
                KEFHDOHHHML__PFNEPJAFEDF<object>
                          (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<NLFLMJPNOLF>__);
  CJFBGEEIPBA__MHEDHEODOPJ(__this,AOMBONOOJFP,method);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (__this_00 == (CHDGOFBHAFI_o *)0x0) {
LAB_03466694:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar3 = CHDGOFBHAFI__BHHNJDDGDHF(__this_00,(MethodInfo *)0x0);
  if (!bVar3) {
    lVar5 = *(long *)(Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01b81620();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01b81620();
    }
    x = (UnityEngine_Object_o *)**(undefined8 **)(lVar5 + 0xb8);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      if (x == (UnityEngine_Object_o *)0x0) goto LAB_03466694;
      if (((FCJBEKHDLAF_o *)x[6].klass != (FCJBEKHDLAF_o *)0x0) &&
         (iVar4 = FCJBEKHDLAF__IHMLDBDLJON((FCJBEKHDLAF_o *)x[6].klass,(MethodInfo *)0x0),
         iVar4 != 0)) {
        return;
      }
    }
    pCVar6 = KFCFGKEHPNK__FHEIBJBHOKF(AOMBONOOJFP,(MethodInfo *)0x0);
    if ((pCVar6 != (CNLGMNIEGFG_o *)0x0) &&
       (__this_05 = (OHDDKGHEEPA_o *)(pCVar6->fields).super.IFJLLGPGMHM,
       __this_05 != (OHDDKGHEEPA_o *)0x0)) {
      bVar1 = (OHDDKGHEEPA_TypeInfo->_2).naturalAligment;
      if (((__this_05->klass->_2).naturalAligment < bVar1) ||
         ((__this_05->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)OHDDKGHEEPA_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(__this_05);
      }
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (__this_01 != (EEGDOGKBLNG_o *)0x0) {
        iVar4 = EEGDOGKBLNG__IGIHHCEONEM(__this_01,(MethodInfo *)0x0);
        bVar3 = OHDDKGHEEPA__BIFOFLHLABM(__this_05,iVar4,(MethodInfo *)0x0);
        if (!bVar3) {
          return;
        }
        PBNPKBJKFHE = (__this->fields).FBILHKCKHEJ;
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_02 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
        if (((AOMBONOOJFP != (NLFLMJPNOLF_o *)0x0) &&
            (__this_03 = (AOMBONOOJFP->fields).MABPCBMOECE,
            __this_03 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) &&
           (PEJIFIIDFMM = Google_Protobuf_Collections_RepeatedField<long>__get_Item
                                    (__this_03,0,
                                     Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__
                                    ), __this_02 != (EEOMEMBBGNA_o *)0x0)) {
          pMVar7 = EEOMEMBBGNA__MPCGKMBAHHO(__this_02,PEJIFIIDFMM,(MethodInfo *)0x0);
          if (PBNPKBJKFHE == (OJEHKJHEBID_o *)0x0) {
            return;
          }
          if (pMVar7 == (MGDJPGGPDJI_o *)0x0) {
            return;
          }
          __this_04 = (NBLEEDEAPHB_o *)thunk_FUN_01bda818(NBLEEDEAPHB_TypeInfo);
          NBLEEDEAPHB___ctor(__this_04,StringLiteral_1,StringLiteral_1,StringLiteral_1,
                             StringLiteral_1,0,-1,(IGFGDDANEPE_o *)0x0,(LBMOOFGGPEB_o *)0x0,0,
                             (AMJMGFCCAKN_o *)0x0,(MethodInfo *)0x0);
          pSVar8 = System_String__Concat
                             (StringLiteral_10875,(pMVar7->fields).LLBEKLPKDHK,StringLiteral_22501,
                              (MethodInfo *)0x0);
          if (__this_04 != (NBLEEDEAPHB_o *)0x0) {
            ppSVar11 = &(__this_04->fields).ABCHAOKFLGL;
            *ppSVar11 = pSVar8;
            thunk_FUN_01c20e04(ppSVar11,pSVar8);
            (__this_04->fields).ALFDOLMJLKI = 0x2d;
            IJIPABLCAKE = (System_Collections_Generic_List_NBLEEDEAPHB__o *)
                          thunk_FUN_01bda818(System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
            System_Collections_Generic_List<object>___ctor
                      ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
                       Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
            lVar5 = Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__;
            if (IJIPABLCAKE != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
              pNVar10 = (IJIPABLCAKE->fields)._items;
              (IJIPABLCAKE->fields)._version = (IJIPABLCAKE->fields)._version + 1;
              if (pNVar10 != (NBLEEDEAPHB_array *)0x0) {
                uVar2 = (IJIPABLCAKE->fields)._size;
                if (uVar2 < (uint)pNVar10->max_length) {
                  (IJIPABLCAKE->fields)._size = uVar2 + 1;
                  pNVar10->m_Items[(int)uVar2] = __this_04;
                  thunk_FUN_01c20e04(pNVar10->m_Items + (int)uVar2,__this_04);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
                             (Il2CppObject *)__this_04,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                }
                pNVar9 = Nekki_SF2_GUI_Dialogs_NotificationsGame__get_Instance((MethodInfo *)0x0);
                BLMFLPJJMPF = (System_Action_object__o *)
                              thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                System_Action<object>___ctor();
                if (pNVar9 != (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) {
                  Nekki_SF2_GUI_Dialogs_NotificationsGame__OpenNotification
                            (pNVar9,StringLiteral_1,IJIPABLCAKE,BLMFLPJJMPF,StringLiteral_16735,1,
                             0.0,1,false,true,1.0,(System_String_o *)0x0,(MethodInfo *)0x0);
                  pNVar9 = Nekki_SF2_GUI_Dialogs_NotificationsGame__get_Instance((MethodInfo *)0x0);
                  if (pNVar9 != (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) {
                    Nekki_SF2_GUI_Dialogs_NotificationsGame__CreateClanLogoImage
                              (pNVar9,PBNPKBJKFHE,false,3.0,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_03466694;
    }
  }
  return;
}

