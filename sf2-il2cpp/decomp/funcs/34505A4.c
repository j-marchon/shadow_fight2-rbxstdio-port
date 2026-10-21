// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$Init @ RVA 0x34505A4

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,
               BKKENCMPLLF_o *FLMDMALCFNA,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *__this_00;
  BKKENCMPLLF_o **ppBVar2;
  System_Action_string__o *JFMGOBJICBG;
  System_Action_CheckBox_EKFFAMKMBIH__o *pSVar3;
  System_Collections_Generic_Dictionary_BBJBEEEJPDC__LabelAlias__o *pSVar4;
  Nekki_SF2_GUI_Scripts_EditBox_o *pNVar5;
  System_Collections_Generic_Dictionary_BBJBEEEJPDC__CPAPMBPHEAB__o *pSVar6;
  MethodInfo *method_00;
  MethodInfo *pMVar7;
  BHEDGAKGKPO_StaticFields *pBVar8;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *__this_01;
  Nekki_SF2_GUI_Scripts_CheckBox_o *pNVar9;
  Nekki_SF2_GUI_LabelAlias_o *pNVar10;
  UnityEngine_Vector3_o UVar11;
  
  if ((DAT_045682a3 & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&System_Action<CheckBox_EKFFAMKMBIH>_TypeInfo);
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_CGOBGFNCCEP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_MGDFLOOAIIC__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_CPAPMBPHEAB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_LabelAlias>_Add__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_4419);
    FUN_01bab630(&StringLiteral_11032);
    FUN_01bab630(&StringLiteral_4379);
    FUN_01bab630(&StringLiteral_4398);
    DAT_045682a3 = 1;
  }
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    UVar11 = UnityEngine_Transform__get_localPosition(__this_00,(MethodInfo *)0x0);
    (__this->fields).NOBBLGAGPIJ.fields.x = UVar11.fields.x;
    (__this->fields).NOBBLGAGPIJ.fields.y = UVar11.fields.y;
    (__this->fields).NOBBLGAGPIJ.fields.z = UVar11.fields.z;
    ppBVar2 = &(__this->fields).FLLHHEODKPH;
    *ppBVar2 = FLMDMALCFNA;
    thunk_FUN_01c20e04(ppBVar2,FLMDMALCFNA);
    __this_01 = (__this->fields)._logoWidget;
    JFMGOBJICBG = (System_Action_string__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_01 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__Init
                (__this_01,JFMGOBJICBG,(MethodInfo *)0x0);
      pNVar9 = (__this->fields)._joinTypeCheckBox;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar9,(MethodInfo *)0x0);
      if (bVar1) {
        pNVar9 = (__this->fields)._joinTypeCheckBox;
        pSVar3 = (System_Action_CheckBox_EKFFAMKMBIH__o *)
                 thunk_FUN_01bda818(System_Action<CheckBox_EKFFAMKMBIH>_TypeInfo);
        System_Action<Int32Enum>___ctor();
        if (pNVar9 == (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) goto LAB_035509f0;
        Nekki_SF2_GUI_Scripts_CheckBox__remove_OnChangedState(pNVar9,pSVar3,(MethodInfo *)0x0);
        pNVar9 = (__this->fields)._joinTypeCheckBox;
        pSVar3 = (System_Action_CheckBox_EKFFAMKMBIH__o *)
                 thunk_FUN_01bda818(System_Action<CheckBox_EKFFAMKMBIH>_TypeInfo);
        System_Action<Int32Enum>___ctor();
        if (pNVar9 == (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) goto LAB_035509f0;
        Nekki_SF2_GUI_Scripts_CheckBox__add_OnChangedState(pNVar9,pSVar3,(MethodInfo *)0x0);
      }
      pNVar10 = (__this->fields)._joinTypeInfo;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar10,(MethodInfo *)0x0);
      if (bVar1) {
        pNVar10 = (__this->fields)._joinTypeInfo;
        if (pNVar10 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_035509f0;
        Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar10,StringLiteral_4419,(MethodInfo *)0x0);
      }
      pSVar4 = (__this->fields).ANCLLFGPFAF;
      if (pSVar4 != (System_Collections_Generic_Dictionary_BBJBEEEJPDC__LabelAlias__o *)0x0) {
        System_Collections_Generic_Dictionary<Int32Enum,_object>__Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,1,
                   (Il2CppObject *)(__this->fields)._nameEditBoxError,
                   (MethodInfo_230F47C *)
                   Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_LabelAlias>_Add__);
        pSVar4 = (__this->fields).ANCLLFGPFAF;
        if (pSVar4 != (System_Collections_Generic_Dictionary_BBJBEEEJPDC__LabelAlias__o *)0x0) {
          System_Collections_Generic_Dictionary<Int32Enum,_object>__Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,2,
                     (Il2CppObject *)(__this->fields)._descEditBoxError,
                     (MethodInfo_230F47C *)
                     Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_LabelAlias>_Add__);
          pSVar4 = (__this->fields).ANCLLFGPFAF;
          if (pSVar4 != (System_Collections_Generic_Dictionary_BBJBEEEJPDC__LabelAlias__o *)0x0) {
            pMVar7 = Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_LabelAlias>_Add__;
            System_Collections_Generic_Dictionary<Int32Enum,_object>__Add
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,3,
                       (Il2CppObject *)(__this->fields)._ratingEditBoxError,
                       (MethodInfo_230F47C *)
                       Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_LabelAlias>_Add__);
            pNVar5 = (__this->fields)._nameEditBox;
            if (pNVar5 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
              Nekki_SF2_GUI_Scripts_EditBox__Clear(pNVar5,(MethodInfo *)0x0);
              pNVar5 = (__this->fields)._descEditBox;
              if (pNVar5 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
                Nekki_SF2_GUI_Scripts_EditBox__Clear(pNVar5,(MethodInfo *)0x0);
                pNVar5 = (__this->fields)._ratingEditBox;
                if (pNVar5 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
                  Nekki_SF2_GUI_Scripts_EditBox__Clear(pNVar5,(MethodInfo *)0x0);
                  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__LJKNOEMABCJ
                            (__this,1,(__this->fields)._nameEditBox,pMVar7);
                  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__LJKNOEMABCJ
                            (__this,2,(__this->fields)._descEditBox,pMVar7);
                  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__LJKNOEMABCJ
                            (__this,3,(__this->fields)._ratingEditBox,pMVar7);
                  pSVar6 = (__this->fields).LCJAAPPDFJJ;
                  if (pSVar6 != (System_Collections_Generic_Dictionary_BBJBEEEJPDC__CPAPMBPHEAB__o *
                                )0x0) {
                    System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,1,1,
                               (MethodInfo_230C684 *)
                               Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_CPAPMBPHEAB>_Add__
                              );
                    pSVar6 = (__this->fields).LCJAAPPDFJJ;
                    if (pSVar6 != (System_Collections_Generic_Dictionary_BBJBEEEJPDC__CPAPMBPHEAB__o
                                   *)0x0) {
                      System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,2,1
                                 ,(MethodInfo_230C684 *)
                                  Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_CPAPMBPHEAB>_Add__
                                );
                      pSVar6 = (__this->fields).LCJAAPPDFJJ;
                      if (pSVar6 != (System_Collections_Generic_Dictionary_BBJBEEEJPDC__CPAPMBPHEAB__o
                                     *)0x0) {
                        pMVar7 = 
                        Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_CPAPMBPHEAB>_Add__
                        ;
                        System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__Add
                                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,3
                                   ,1,(MethodInfo_230C684 *)
                                      Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_CPAPMBPHEAB>_Add__
                                  );
                        Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetEBoxError
                                  (__this,1,0,pMVar7);
                        Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetEBoxError
                                  (__this,2,0,pMVar7);
                        Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetEBoxError
                                  (__this,3,0,pMVar7);
                        pNVar10 = (__this->fields)._nameHeader;
                        (__this->fields).CHHEFFAKHDB = -1;
                        if (pNVar10 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                          Nekki_SF2_GUI_LabelAlias__set_Alias
                                    (pNVar10,StringLiteral_4398,(MethodInfo *)0x0);
                          pNVar10 = (__this->fields)._nameHeader;
                          if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
                            thunk_FUN_01ba7564();
                          }
                          if (pNVar10 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                            pBVar8 = BHEDGAKGKPO_TypeInfo->static_fields;
                            (*(pNVar10->klass->vtable)._23_set_color.methodPtr)
                                      ((pBVar8->FHIAKPJBBCB).fields.r,(pBVar8->FHIAKPJBBCB).fields.g
                                       ,(pBVar8->FHIAKPJBBCB).fields.b,
                                       (pBVar8->FHIAKPJBBCB).fields.a,pNVar10,
                                       (pNVar10->klass->vtable)._23_set_color.method);
                            pNVar10 = (__this->fields)._descHeader;
                            if (pNVar10 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                              Nekki_SF2_GUI_LabelAlias__set_Alias
                                        (pNVar10,StringLiteral_4379,(MethodInfo *)0x0);
                              pNVar10 = (__this->fields)._descHeader;
                              if (pNVar10 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                                pBVar8 = BHEDGAKGKPO_TypeInfo->static_fields;
                                (*(pNVar10->klass->vtable)._23_set_color.methodPtr)
                                          ((pBVar8->FHIAKPJBBCB).fields.r,
                                           (pBVar8->FHIAKPJBBCB).fields.g,
                                           (pBVar8->FHIAKPJBBCB).fields.b,
                                           (pBVar8->FHIAKPJBBCB).fields.a,pNVar10,
                                           (pNVar10->klass->vtable)._23_set_color.method);
                                pNVar10 = (__this->fields)._ratingHeader;
                                if (pNVar10 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                                  Nekki_SF2_GUI_LabelAlias__set_Alias
                                            (pNVar10,StringLiteral_11032,(MethodInfo *)0x0);
                                  pNVar10 = (__this->fields)._ratingHeader;
                                  if (pNVar10 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                                    pBVar8 = BHEDGAKGKPO_TypeInfo->static_fields;
                                    (*(pNVar10->klass->vtable)._23_set_color.methodPtr)
                                              ((pBVar8->FHIAKPJBBCB).fields.r,
                                               (pBVar8->FHIAKPJBBCB).fields.g,
                                               (pBVar8->FHIAKPJBBCB).fields.b,
                                               (pBVar8->FHIAKPJBBCB).fields.a,pNVar10,
                                               (pNVar10->klass->vtable)._23_set_color.method);
                                    Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__UpdateContent
                                              (__this,method_00);
                                    return;
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
        }
      }
    }
  }
LAB_035509f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

