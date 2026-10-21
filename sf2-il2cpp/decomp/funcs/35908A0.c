// Nekki.SF2.GUI.Profile.BattlePassPanel$$MOFLFJLBBBI @ RVA 0x35908A0

void Nekki_SF2_GUI_Profile_BattlePassPanel__MOFLFJLBBBI
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  JMDPBFOCHHP_o *pJVar2;
  Il2CppObject *pIVar3;
  JMDPBFOCHHP_FNILDHLJBBJ_o *GDGBNEPJEOO;
  System_String_o *format;
  EGMONPGHHDP_o *pEVar4;
  JMDPBFOCHHP_FNILDHLJBBJ_o *pJVar5;
  DDMHMABAHHD_o *FBODAFDBNLH;
  System_Object_array *args;
  long lVar6;
  undefined8 uVar7;
  MethodInfo *in_x3;
  System_Collections_Generic_List_PIJBHIFGBCK__o *pSVar8;
  JMDPBFOCHHP_CKEMIAEPGKD_o *pJVar9;
  System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *pSVar10;
  System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *pSVar11;
  System_Collections_Generic_List_DDMHMABAHHD__o *pSVar12;
  LabelButton_o *__this_00;
  int index;
  
  if ((DAT_04568d7a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PIJBHIFGBCK>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Count__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_get_Count__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_15431);
    FUN_01bab630(&StringLiteral_15430);
    DAT_04568d7a = 1;
  }
  pSVar8 = (__this->fields).IBBJADAIGIL;
  if (pSVar8 != (System_Collections_Generic_List_PIJBHIFGBCK__o *)0x0) {
    length = (pSVar8->fields)._size;
    (pSVar8->fields)._size = 0;
    (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
    if (0 < length) {
      in_x3 = (MethodInfo *)0x0;
      System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pJVar9 = (__this->fields).CNFIAJGCJBC;
    if (pJVar9 != (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) {
      index = 0;
      while (pSVar10 = (pJVar9->fields).GPNNHMIJLGL,
            pSVar10 != (System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *)0x0) {
        if ((pSVar10->fields)._size <= index) {
          __this_00 = (__this->fields)._btnBuyPass;
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pEVar4 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
          if ((pEVar4 != (EGMONPGHHDP_o *)0x0) &&
             (bVar1 = EGMONPGHHDP__PJKNOEOGFNM(pEVar4,(MethodInfo *)0x0),
             __this_00 != (LabelButton_o *)0x0)) {
            UnityEngine_UI_Selectable__set_interactable
                      ((UnityEngine_UI_Selectable_o *)__this_00,(bool)(~bVar1 & 1),(MethodInfo *)0x0
                      );
            return;
          }
          break;
        }
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pJVar2 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
        pJVar9 = (__this->fields).CNFIAJGCJBC;
        if ((((pJVar9 == (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) ||
             (pSVar10 = (pJVar9->fields).GPNNHMIJLGL,
             pSVar10 == (System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *)0x0)) ||
            (pIVar3 = System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar10,index,
                                 Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Item__
                                ), pIVar3 == (Il2CppObject *)0x0)) ||
           (pJVar2 == (JMDPBFOCHHP_o *)0x0)) break;
        GDGBNEPJEOO = JMDPBFOCHHP__OJOIAONADNG(pJVar2,pIVar3[1].monitor,(MethodInfo *)0x0);
        if (GDGBNEPJEOO == (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0) {
          args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
          pJVar9 = (__this->fields).CNFIAJGCJBC;
          if (((pJVar9 == (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) ||
              (pSVar10 = (pJVar9->fields).GPNNHMIJLGL,
              pSVar10 == (System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *)0x0)) ||
             ((pIVar3 = System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar10,index,
                                   Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Item__
                                  ), pIVar3 == (Il2CppObject *)0x0 ||
              (args == (System_Object_array *)0x0)))) break;
          pIVar3 = pIVar3[1].monitor;
          if ((pIVar3 != (Il2CppObject *)0x0) &&
             (lVar6 = thunk_FUN_01bda71c(pIVar3,(((args->obj).klass)->_1).element_class), lVar6 == 0
             )) {
LAB_03690cc4:
            uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar7,0);
          }
          if ((int)args->max_length == 0) {
LAB_03690cc0:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          args->m_Items[0] = pIVar3;
          thunk_FUN_01c20e04(args->m_Items,pIVar3);
          format = StringLiteral_15430;
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
            format = StringLiteral_15430;
          }
LAB_03690ad4:
          UnityEngine_Debug__LogErrorFormat(format,args,(MethodInfo *)0x0);
        }
        else {
          pSVar11 = (GDGBNEPJEOO->fields).BAPMMGFEIDM;
          if (pSVar11 ==
              (System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *)0x0) break;
          if ((pSVar11->fields)._size < 1) {
            pSVar12 = (GDGBNEPJEOO->fields).GFBNJPMOEKD;
            if (pSVar12 == (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0) break;
            if ((pSVar12->fields)._size < 1) {
              args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
              pJVar9 = (__this->fields).CNFIAJGCJBC;
              if ((((pJVar9 != (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) &&
                   (pSVar10 = (pJVar9->fields).GPNNHMIJLGL,
                   pSVar10 != (System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *)0x0)) &&
                  (pIVar3 = System_Collections_Generic_List<object>__get_Item
                                      ((System_Collections_Generic_List_object__o *)pSVar10,index,
                                       Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Item__
                                      ), pIVar3 != (Il2CppObject *)0x0)) &&
                 (args != (System_Object_array *)0x0)) {
                pIVar3 = pIVar3[1].monitor;
                if ((pIVar3 != (Il2CppObject *)0x0) &&
                   (lVar6 = thunk_FUN_01bda71c(pIVar3,(((args->obj).klass)->_1).element_class),
                   lVar6 == 0)) goto LAB_03690cc4;
                if ((int)args->max_length == 0) goto LAB_03690cc0;
                args->m_Items[0] = pIVar3;
                thunk_FUN_01c20e04(args->m_Items,pIVar3);
                format = StringLiteral_15431;
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                  format = StringLiteral_15431;
                }
                goto LAB_03690ad4;
              }
              break;
            }
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pEVar4 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
            if (pEVar4 == (EGMONPGHHDP_o *)0x0) break;
            bVar1 = EGMONPGHHDP__OEGMLDDKCLA(pEVar4,GDGBNEPJEOO,(MethodInfo *)0x0);
            if (bVar1) {
              if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pJVar2 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
              pJVar9 = (__this->fields).CNFIAJGCJBC;
              if (((pJVar9 == (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) ||
                  (pSVar10 = (pJVar9->fields).GPNNHMIJLGL,
                  pSVar10 == (System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *)0x0)) ||
                 ((pIVar3 = System_Collections_Generic_List<object>__get_Item
                                      ((System_Collections_Generic_List_object__o *)pSVar10,index,
                                       Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Item__
                                      ), pIVar3 == (Il2CppObject *)0x0 ||
                  (pJVar2 == (JMDPBFOCHHP_o *)0x0)))) break;
              pJVar5 = JMDPBFOCHHP__OJOIAONADNG
                                 (pJVar2,(System_String_o *)pIVar3[2].klass,(MethodInfo *)0x0);
              if (pJVar5 == (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0) goto LAB_03690ba4;
              pSVar11 = (pJVar5->fields).BAPMMGFEIDM;
              if (pSVar11 ==
                  (System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *)0x0)
              break;
              GDGBNEPJEOO = pJVar5;
              if (0 < (pSVar11->fields)._size) goto LAB_03690a4c;
              pSVar12 = (pJVar5->fields).GFBNJPMOEKD;
              if (pSVar12 == (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0) break;
              if ((pSVar12->fields)._size < 1) goto LAB_03690ae0;
            }
            else {
LAB_03690ba4:
              pSVar12 = (GDGBNEPJEOO->fields).GFBNJPMOEKD;
              if (pSVar12 == (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0) break;
            }
            FBODAFDBNLH = (DDMHMABAHHD_o *)
                          System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar12,0,
                                     Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__)
            ;
            Nekki_SF2_GUI_Profile_BattlePassPanel__OOGBJMINHEC(__this,FBODAFDBNLH,index,in_x3);
          }
          else {
LAB_03690a4c:
            Nekki_SF2_GUI_Profile_BattlePassPanel__MFJHNBOEHFN(__this,GDGBNEPJEOO,index,in_x3);
          }
        }
LAB_03690ae0:
        pJVar9 = (__this->fields).CNFIAJGCJBC;
        index = index + 1;
        if (pJVar9 == (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) break;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

