// Nekki.SF2.GUI.TableView$$Init @ RVA 0x30D90B4

void Nekki_SF2_GUI_TableView__Init
               (Nekki_SF2_GUI_TableView_o *__this,CPFMNHBNOEN_o *CBHHDMMIJKM,
               MLIIECFHJAM_o *FNBNALGIDNF,MethodInfo *method)

{
  CPFMNHBNOEN_o **ppCVar1;
  MLIIECFHJAM_o **ppMVar2;
  KMAKOOHEKNB_o *__this_00;
  KELJDKIIHMM_o *__this_01;
  KELJDKIIHMM_o **ppKVar3;
  IKGDKGBHEFN_o *__this_02;
  UnityEngine_GameObject_o *pUVar4;
  Nekki_SF2_GUI_TableViewScroll_o *pNVar5;
  UnityEngine_Events_UnityAction_T0__o *call;
  UnityEngine_Events_UnityAction_o *pUVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_02;
  Nekki_SF2_GUI_TableViewScroll_o **ppNVar7;
  KMAKOOHEKNB_o **ppKVar8;
  IKGDKGBHEFN_o **ppIVar9;
  UnityEngine_Events_UnityEvent_Vector2__o *__this_03;
  UnityEngine_Events_UnityEvent_o *pUVar10;
  float fVar11;
  undefined8 uVar12;
  
  if ((DAT_04566343 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<CanvasRenderer>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<RectMask2D>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<TableViewScroll>__);
    FUN_01bab630(&IKGDKGBHEFN_TypeInfo);
    FUN_01bab630(&KELJDKIIHMM_TypeInfo);
    FUN_01bab630(&KMAKOOHEKNB_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TableView_LDHGBDGHOKI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TableView_MPMDFILDNCJ__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TableView_PEBNCHIIKID__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<Vector2>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<Vector2>_AddListener__);
    DAT_04566343 = 1;
  }
  ppCVar1 = &(__this->fields).NFKFGFPBGDA;
  *ppCVar1 = CBHHDMMIJKM;
  thunk_FUN_01c20e04(ppCVar1,CBHHDMMIJKM);
  ppMVar2 = &(__this->fields).CFMPOFMLMKK;
  *ppMVar2 = FNBNALGIDNF;
  thunk_FUN_01c20e04(ppMVar2,FNBNALGIDNF);
  (__this->fields).BPELPEAHGHL = true;
  __this_00 = (KMAKOOHEKNB_o *)thunk_FUN_01bda818(KMAKOOHEKNB_TypeInfo);
  KMAKOOHEKNB___ctor(__this_00,(MethodInfo *)0x0);
  ppKVar8 = &(__this->fields).HCLHHHKCABP;
  *ppKVar8 = __this_00;
  thunk_FUN_01c20e04(ppKVar8,__this_00);
  if (*ppKVar8 != (KMAKOOHEKNB_o *)0x0) {
    ((*ppKVar8)->fields).KPGBDEPEHJD = (__this->fields)._spacing;
    __this_01 = (KELJDKIIHMM_o *)thunk_FUN_01bda818(KELJDKIIHMM_TypeInfo);
    KELJDKIIHMM___ctor(__this_01,(MethodInfo *)0x0);
    ppKVar3 = &(__this->fields)._LBHOKEBOIFN_k__BackingField;
    *ppKVar3 = __this_01;
    thunk_FUN_01c20e04(ppKVar3,__this_01);
    __this_02 = (IKGDKGBHEFN_o *)thunk_FUN_01bda818(IKGDKGBHEFN_TypeInfo);
    IKGDKGBHEFN___ctor(__this_02,(MethodInfo *)0x0);
    ppIVar9 = &(__this->fields).MKCAEDADDII;
    *ppIVar9 = __this_02;
    thunk_FUN_01c20e04(ppIVar9,__this_02);
    if (*ppIVar9 != (IKGDKGBHEFN_o *)0x0) {
      IKGDKGBHEFN__GIENGNEGHPJ(*ppIVar9,(MethodInfo *)0x0);
      pUVar4 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        pNVar5 = (Nekki_SF2_GUI_TableViewScroll_o *)
                 UnityEngine_GameObject__AddComponent<object>
                           (pUVar4,Method_UnityEngine_GameObject_AddComponent<TableViewScroll>__);
        ppNVar7 = &(__this->fields).IDIMFLMKDMD;
        *ppNVar7 = pNVar5;
        thunk_FUN_01c20e04(ppNVar7,pNVar5);
        if (*ppNVar7 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0) {
          Nekki_SF2_GUI_TableViewScroll__Init(*ppNVar7,(MethodInfo *)0x0);
          if (*ppNVar7 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0) {
            Nekki_SF2_GUI_TableViewScroll__SetOrientation
                      (*ppNVar7,(__this->fields).tableViewOrientation,(MethodInfo *)0x0);
            pNVar5 = (__this->fields).IDIMFLMKDMD;
            if (pNVar5 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0) {
              fVar11 = (__this->fields).elasticity;
              (pNVar5->fields).super.m_MovementType = 3;
              (pNVar5->fields).super.m_Elasticity = fVar11;
              (pNVar5->fields).super.m_Inertia = (__this->fields).inertia;
              uVar12._0_4_ = (__this->fields).scrollSensitivity;
              uVar12._4_4_ = (__this->fields).decelerationRate;
              __this_03 = (UnityEngine_Events_UnityEvent_Vector2__o *)
                          (pNVar5->fields).super.m_OnValueChanged;
              uVar12 = NEON_rev64(uVar12,4);
              (pNVar5->fields).super.m_DecelerationRate = (float)(int)uVar12;
              (pNVar5->fields).super.m_ScrollSensitivity = (float)(int)((ulong)uVar12 >> 0x20);
              call = (UnityEngine_Events_UnityAction_T0__o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction<Vector2>_TypeInfo);
              UnityEngine_Events_UnityAction<Vector2>___ctor();
              if (__this_03 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
                UnityEngine_Events_UnityEvent<Vector2>__AddListener
                          (__this_03,call,
                           Method_UnityEngine_Events_UnityEvent<Vector2>_AddListener__);
                if (*ppNVar7 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0) {
                  pUVar10 = ((*ppNVar7)->fields).onDragBegin;
                  pUVar6 = (UnityEngine_Events_UnityAction_o *)
                           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                  UnityEngine_Events_UnityAction___ctor();
                  if (pUVar10 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    UnityEngine_Events_UnityEvent__AddListener(pUVar10,pUVar6,(MethodInfo *)0x0);
                    if (*ppNVar7 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0) {
                      pUVar10 = ((*ppNVar7)->fields).onDragEnd;
                      pUVar6 = (UnityEngine_Events_UnityAction_o *)
                               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                      UnityEngine_Events_UnityAction___ctor();
                      if (pUVar10 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                        UnityEngine_Events_UnityEvent__AddListener(pUVar10,pUVar6,(MethodInfo *)0x0)
                        ;
                        fVar11 = Nekki_SF2_GUI_TableView__MAGEKPGDFOA(__this,method_00);
                        (__this->fields).MENMAPNCLAH = fVar11 * 0.5;
                        fVar11 = Nekki_SF2_GUI_TableView__MAGEKPGDFOA(__this,method_01);
                        (__this->fields).EKHGDOCDNLC = fVar11 * 0.5;
                        method_02 = extraout_x1;
                        if ((__this->fields).AddMask == false) {
LAB_031d9414:
                          Nekki_SF2_GUI_TableView__ReloadData(__this,method_02);
                          return;
                        }
                        pUVar4 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                          UnityEngine_GameObject__AddComponent<object>
                                    (pUVar4,Method_UnityEngine_GameObject_AddComponent<RectMask2D>__
                                    );
                          pUVar4 = UnityEngine_Component__get_gameObject
                                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                          if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                            UnityEngine_GameObject__AddComponent<object>
                                      (pUVar4,
                                       Method_UnityEngine_GameObject_AddComponent<CanvasRenderer>__)
                            ;
                            method_02 = extraout_x1_00;
                            goto LAB_031d9414;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

