// Nekki.SF2.GUI.TableView$$IGJGHJDHOKD @ RVA 0x30D86A8

void Nekki_SF2_GUI_TableView__IGJGHJDHOKD
               (Nekki_SF2_GUI_TableView_o *__this,bool NFPAMJDIJLP,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t DPJIDNBJIBG;
  Nekki_SF2_GUI_TableViewCell_o *HBHBCBJANIC;
  Nekki_SF2_GUI_TableViewCellDidHighlightEvent_o *__this_00;
  Nekki_SF2_GUI_TableViewCellDidSelectEvent_o *__this_01;
  Nekki_SF2_GUI_TableViewCellDoubleClickEvent_o *__this_02;
  IKGDKGBHEFN_o *__this_03;
  UnityEngine_Transform_o *transform;
  KELJDKIIHMM_o *pKVar3;
  KMAKOOHEKNB_o *__this_04;
  float value;
  
  if ((DAT_0456633f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456633f = 1;
  }
  pKVar3 = (__this->fields)._LBHOKEBOIFN_k__BackingField;
  if (pKVar3 != (KELJDKIIHMM_o *)0x0) {
    if (NFPAMJDIJLP) {
      DPJIDNBJIBG = LECDDPFLBEM__KIKGKKGDCKK
                              ((UnityEngine_SocialPlatforms_Range_o)
                               (pKVar3->fields).CIMDIANAHIM.fields,(MethodInfo *)0x0);
      pKVar3 = (__this->fields)._LBHOKEBOIFN_k__BackingField;
      if (pKVar3 == (KELJDKIIHMM_o *)0x0) goto LAB_031d8834;
    }
    else {
      DPJIDNBJIBG = (pKVar3->fields).CIMDIANAHIM.fields.from;
    }
    HBHBCBJANIC = KELJDKIIHMM__KHGEMIEPBJB(pKVar3,DPJIDNBJIBG,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)HBHBCBJANIC,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    if ((HBHBCBJANIC != (Nekki_SF2_GUI_TableViewCell_o *)0x0) &&
       (__this_00 = (HBHBCBJANIC->fields).DidHighlightEvent,
       __this_00 != (Nekki_SF2_GUI_TableViewCellDidHighlightEvent_o *)0x0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
      __this_01 = (HBHBCBJANIC->fields).DidSelectEvent;
      if (__this_01 != (Nekki_SF2_GUI_TableViewCellDidSelectEvent_o *)0x0) {
        UnityEngine_Events_UnityEventBase__RemoveAllListeners
                  ((UnityEngine_Events_UnityEventBase_o *)__this_01,(MethodInfo *)0x0);
        __this_02 = (HBHBCBJANIC->fields).DoubleClickEvent;
        if (__this_02 != (Nekki_SF2_GUI_TableViewCellDoubleClickEvent_o *)0x0) {
          UnityEngine_Events_UnityEventBase__RemoveAllListeners
                    ((UnityEngine_Events_UnityEventBase_o *)__this_02,(MethodInfo *)0x0);
          __this_03 = (__this->fields).MKCAEDADDII;
          if (__this_03 != (IKGDKGBHEFN_o *)0x0) {
            IKGDKGBHEFN__IKHEOEJKGDI(__this_03,HBHBCBJANIC,(MethodInfo *)0x0);
            pKVar3 = (__this->fields)._LBHOKEBOIFN_k__BackingField;
            if (pKVar3 != (KELJDKIIHMM_o *)0x0) {
              KELJDKIIHMM__JOBEMHLDEGD(pKVar3,DPJIDNBJIBG,(MethodInfo *)0x0);
              pKVar3 = (__this->fields)._LBHOKEBOIFN_k__BackingField;
              if (pKVar3 != (KELJDKIIHMM_o *)0x0) {
                (pKVar3->fields).CIMDIANAHIM.fields.count =
                     (pKVar3->fields).CIMDIANAHIM.fields.count + -1;
                if (!NFPAMJDIJLP) {
                  (pKVar3->fields).CIMDIANAHIM.fields.from =
                       (pKVar3->fields).CIMDIANAHIM.fields.from + 1;
                }
                iVar1 = (__this->fields).tableViewOrientation;
                transform = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)HBHBCBJANIC,(MethodInfo *)0x0);
                __this_04 = (__this->fields).HCLHHHKCABP;
                if (__this_04 != (KMAKOOHEKNB_o *)0x0) {
                  value = KMAKOOHEKNB__HGJGLBLDDHF(__this_04,DPJIDNBJIBG,(MethodInfo *)0x0);
                  if (iVar1 == 0) {
                    UnityEngine_TransformExtensions__SetLocalPositionY
                              (transform,value,(MethodInfo *)0x0);
                    return;
                  }
                  UnityEngine_TransformExtensions__SetLocalPositionX
                            (transform,value,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_031d8834:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

