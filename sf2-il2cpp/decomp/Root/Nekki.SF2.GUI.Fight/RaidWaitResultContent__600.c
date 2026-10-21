// TypeDefIndex 600
// Namespace: Nekki.SF2.GUI.Fight
// public class RaidWaitResultContent : RaidEndFightBaseContent
// Fields:
//   private LabelAlias _Text; // 0x28
//   private string _Alias; // 0x30
//   private float CFKIJMGDLLK; // 0x38
//   private int JFNNLEIIIFM; // 0x3C
//   private List<string> NDJIAKPCEJB; // 0x40

// ===== private void LJMPGBDJCLM(float PNEIGGOFIOA)  [RVA 0x35BB8B8]
// Nekki.SF2.GUI.Fight.RaidWaitResultContent$$LJMPGBDJCLM @ RVA 0x35BB8B8

void Nekki_SF2_GUI_Fight_RaidWaitResultContent__LJMPGBDJCLM
               (Nekki_SF2_GUI_Fight_RaidWaitResultContent_o *__this,float PNEIGGOFIOA,
               MethodInfo *method)

{
  System_Collections_IEnumerator_o *routine;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568ed9 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14584/*"UpdateLabel"*/);
    DAT_04568ed9 = 1;
    method = extraout_x1;
  }
  routine = Nekki_SF2_GUI_Fight_RaidWaitResultContent__MGCPBOGFNNJ(__this,PNEIGGOFIOA,method);
  UnityEngine_MonoBehaviour__StartCoroutine
            ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__InvokeRepeating
            ((UnityEngine_MonoBehaviour_o *)__this,StringLiteral_14584/*"UpdateLabel"*/,0.0,
             (__this->fields).CFKIJMGDLLK,(MethodInfo *)0x0);
  return;
}


// ===== private void OHFPFJBPBAD()  [RVA 0x35BB9B0]
// Nekki.SF2.GUI.Fight.RaidWaitResultContent$$OHFPFJBPBAD @ RVA 0x35BB9B0

void Nekki_SF2_GUI_Fight_RaidWaitResultContent__OHFPFJBPBAD
               (Nekki_SF2_GUI_Fight_RaidWaitResultContent_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568eda & 1) == 0) {
    FUN_01bab630(&StringLiteral_14584/*"UpdateLabel"*/);
    DAT_04568eda = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).super.NHNIOGOEAJB;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    UnityEngine_MonoBehaviour__CancelInvoke
              ((UnityEngine_MonoBehaviour_o *)__this,StringLiteral_14584/*"UpdateLabel"*/,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public void Init(AADKBCFCLKK PLDDMPPBHBO)  [RVA 0x35BBA10]
// Nekki.SF2.GUI.Fight.RaidWaitResultContent$$Init @ RVA 0x35BBA10

void Nekki_SF2_GUI_Fight_RaidWaitResultContent__Init
               (Nekki_SF2_GUI_Fight_RaidWaitResultContent_o *__this,AADKBCFCLKK_o *PLDDMPPBHBO,
               MethodInfo *method)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *pSVar7;
  int64_t iVar8;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  long lVar9;
  Il2CppClass *pIVar10;
  System_Collections_Generic_List_string__o *pSVar11;
  ulong uVar12;
  System_String_array *pSVar13;
  int32_t *piVar14;
  System_String_o *pSVar15;
  undefined8 uVar16;
  float PNEIGGOFIOA;
  
  if ((DAT_04568edb & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&StringLiteral_1399/*".."*/);
    FUN_01bab630(&StringLiteral_1377/*"."*/);
    FUN_01bab630(&StringLiteral_1400/*"..."*/);
    DAT_04568edb = 1;
  }
  pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar5 = Method_System_Array_Empty<string>__;
  pSVar15 = (__this->fields)._Alias;
  lVar9 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar9 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar9 = *(long *)(lVar5 + 0x38);
  }
  lVar9 = *(long *)(lVar9 + 0x10);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01b81620();
  }
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01b81620();
  }
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar10 = pIVar4->klass;
    uVar16 = **(undefined8 **)(lVar5 + 0xb8);
    uVar1._0_1_ = (pIVar10->_2).rank;
    uVar1._1_1_ = (pIVar10->_2).minimumAlignment;
    uVar12 = (ulong)uVar1;
    if (uVar12 != 0) {
      piVar14 = &((pIVar10->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar6 = pIVar10->vtable + (*piVar14 + 0xc);
          goto LAB_036bbb5c;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_036bbb5c:
    pSVar15 = (System_String_o *)(*pVVar6->methodPtr)(pIVar4,pSVar15,uVar16,pVVar6->method);
    lVar5 = Method_System_Collections_Generic_List<string>_Add__;
    pSVar11 = (__this->fields).NDJIAKPCEJB;
    if (pSVar11 != (System_Collections_Generic_List_string__o *)0x0) {
      pSVar13 = (pSVar11->fields)._items;
      (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
      if (pSVar13 != (System_String_array *)0x0) {
        uVar2 = (pSVar11->fields)._size;
        if (uVar2 < (uint)pSVar13->max_length) {
          (pSVar11->fields)._size = uVar2 + 1;
          pSVar13->m_Items[(int)uVar2] = pSVar15;
          thunk_FUN_01c20e04(pSVar13->m_Items + (int)uVar2,pSVar15);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar11,(Il2CppObject *)pSVar15,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        pSVar11 = (__this->fields).NDJIAKPCEJB;
        pSVar7 = System_String__Concat(pSVar15,StringLiteral_1377/*"."*/,(MethodInfo *)0x0);
        lVar5 = Method_System_Collections_Generic_List<string>_Add__;
        if (pSVar11 != (System_Collections_Generic_List_string__o *)0x0) {
          pSVar13 = (pSVar11->fields)._items;
          (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
          if (pSVar13 != (System_String_array *)0x0) {
            uVar2 = (pSVar11->fields)._size;
            if (uVar2 < (uint)pSVar13->max_length) {
              (pSVar11->fields)._size = uVar2 + 1;
              pSVar13->m_Items[(int)uVar2] = pSVar7;
              thunk_FUN_01c20e04();
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar11,(Il2CppObject *)pSVar7
                         ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                        );
            }
            pSVar11 = (__this->fields).NDJIAKPCEJB;
            pSVar7 = System_String__Concat(pSVar15,StringLiteral_1399/*".."*/,(MethodInfo *)0x0);
            lVar5 = Method_System_Collections_Generic_List<string>_Add__;
            if (pSVar11 != (System_Collections_Generic_List_string__o *)0x0) {
              pSVar13 = (pSVar11->fields)._items;
              (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
              if (pSVar13 != (System_String_array *)0x0) {
                uVar2 = (pSVar11->fields)._size;
                if (uVar2 < (uint)pSVar13->max_length) {
                  (pSVar11->fields)._size = uVar2 + 1;
                  pSVar13->m_Items[(int)uVar2] = pSVar7;
                  thunk_FUN_01c20e04();
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar11,
                             (Il2CppObject *)pSVar7,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                }
                pSVar11 = (__this->fields).NDJIAKPCEJB;
                pSVar15 = System_String__Concat(pSVar15,StringLiteral_1400/*"..."*/,(MethodInfo *)0x0);
                lVar5 = Method_System_Collections_Generic_List<string>_Add__;
                if (pSVar11 != (System_Collections_Generic_List_string__o *)0x0) {
                  pSVar13 = (pSVar11->fields)._items;
                  (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
                  if (pSVar13 != (System_String_array *)0x0) {
                    uVar2 = (pSVar11->fields)._size;
                    if (uVar2 < (uint)pSVar13->max_length) {
                      (pSVar11->fields)._size = uVar2 + 1;
                      pSVar13->m_Items[(int)uVar2] = pSVar15;
                      thunk_FUN_01c20e04();
                    }
                    else {
                      System_Collections_Generic_List<object>__AddWithResize
                                ((System_Collections_Generic_List_object__o *)pSVar11,
                                 (Il2CppObject *)pSVar15,
                                 *(MethodInfo_26E4DAC **)
                                  (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                    }
                    bVar3 = OOBBAGLCFPF__EJBFAOJGGNB(PLDDMPPBHBO,(MethodInfo *)0x0);
                    PNEIGGOFIOA = 0.0;
                    method_00 = extraout_x1;
                    if (bVar3) {
                      iVar8 = OOBBAGLCFPF__EMCFJLGHAOE(PLDDMPPBHBO,(MethodInfo *)0x0);
                      PNEIGGOFIOA = (float)iVar8 / 1000.0;
                      method_00 = extraout_x1_00;
                    }
                    if (PNEIGGOFIOA <= 1.0) {
                      PNEIGGOFIOA = 1.0;
                    }
                    Nekki_SF2_GUI_Fight_RaidWaitResultContent__LJMPGBDJCLM
                              (__this,PNEIGGOFIOA,method_00);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private IEnumerator MGCPBOGFNNJ(float PNEIGGOFIOA)  [RVA 0x35BB934]
// Nekki.SF2.GUI.Fight.RaidWaitResultContent$$MGCPBOGFNNJ @ RVA 0x35BB934

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Fight_RaidWaitResultContent__MGCPBOGFNNJ
          (Nekki_SF2_GUI_Fight_RaidWaitResultContent_o *__this,float PNEIGGOFIOA,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568edc & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Fight_RaidWaitResultContent_HEBAOHOKNNA_TypeInfo);
    DAT_04568edc = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_RaidWaitResultContent_HEBAOHOKNNA_TypeInfo,
                                 method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].monitor = __this;
  thunk_FUN_01c20e04(&__this_00[2].monitor,__this);
  *(float *)&__this_00[2].klass = PNEIGGOFIOA;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== private void UpdateLabel()  [RVA 0x35BBDC4]
// Nekki.SF2.GUI.Fight.RaidWaitResultContent$$UpdateLabel @ RVA 0x35BBDC4

void Nekki_SF2_GUI_Fight_RaidWaitResultContent__UpdateLabel
               (Nekki_SF2_GUI_Fight_RaidWaitResultContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_string__o *__this_00;
  Il2CppObject *pIVar2;
  int index;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_04568edd & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568edd = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._Text;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  __this_00 = (__this->fields).NDJIAKPCEJB;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    index = (__this->fields).JFNNLEIIIFM;
    if ((__this_00->fields)._size <= index) {
      index = 0;
      (__this->fields).JFNNLEIIIFM = 0;
    }
    pNVar3 = (__this->fields)._Text;
    pIVar2 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,index,
                        Method_System_Collections_Generic_List<string>_get_Item__);
    if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                (pNVar3,pIVar2,(pNVar3->klass->vtable)._75_set_text.method);
      (__this->fields).JFNNLEIIIFM = (__this->fields).JFNNLEIIIFM + 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x35BBEA4]
// Nekki.SF2.GUI.Fight.RaidWaitResultContent$$.ctor @ RVA 0x35BBEA4

void Nekki_SF2_GUI_Fight_RaidWaitResultContent___ctor
               (Nekki_SF2_GUI_Fight_RaidWaitResultContent_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_string__o **ppSVar1;
  
  if ((DAT_04568ede & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&StringLiteral_10847/*"RaidFightTimeoutCalcResult"*/);
    DAT_04568ede = 1;
  }
  (__this->fields)._Alias = StringLiteral_10847/*"RaidFightTimeoutCalcResult"*/;
  thunk_FUN_01c20e04();
  (__this->fields).CFKIJMGDLLK = 0.3;
  __this_00 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar1 = &(__this->fields).NDJIAKPCEJB;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  Nekki_SF2_GUI_Fight_RaidEndFightBaseContent___ctor
            ((Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *)__this,(MethodInfo *)0x0);
  return;
}

