// TypeDefIndex 3320
// Namespace: Nekki.SF2.GUI.DebugModules
// public class ScreenDebug : DebugUIModule
// Fields:
//   private static ScreenDebug FFOLFLCMFCH; // 0x0
//   private Stack<Text> KAABNEFOJHJ; // 0x28
//   private Dictionary<string, Text> FEHFKJKABDN; // 0x30
//   private VerticalLayoutGroup _lineHolder; // 0x38
//   private StringBuilder LJLADKMLDEF; // 0x40
//   private float ELCCJMINMNI; // 0x48
//   private float HAFEGAEOPGM; // 0x4C

// ===== public void ShowDebugLine(string HKJPKDKDKAG, string EHNFGMGKCHO)  [RVA 0x3528F18]
// Nekki.SF2.GUI.DebugModules.ScreenDebug$$ShowDebugLine @ RVA 0x3528F18

void Nekki_SF2_GUI_DebugModules_ScreenDebug__ShowDebugLine
               (Nekki_SF2_GUI_DebugModules_ScreenDebug_o *__this,System_String_o *HKJPKDKDKAG,
               System_String_o *EHNFGMGKCHO,MethodInfo *method)

{
  UnityEngine_Color_o EFJKPCADGJH;
  
  EFJKPCADGJH.fields.b = 0.0;
  EFJKPCADGJH.fields.a = 1.0;
  EFJKPCADGJH.fields.r = 1.0;
  EFJKPCADGJH.fields.g = 0.0;
  Nekki_SF2_GUI_DebugModules_ScreenDebug__ShowDebugLine
            (__this,HKJPKDKDKAG,EHNFGMGKCHO,EFJKPCADGJH,method);
  return;
}


// ===== private Text PKEGDLOAMDF(string KGLJICLJHEL)  [RVA 0x3528F90]
// Nekki.SF2.GUI.DebugModules.ScreenDebug$$PKEGDLOAMDF @ RVA 0x3528F90

UnityEngine_UI_Text_o *
Nekki_SF2_GUI_DebugModules_ScreenDebug__PKEGDLOAMDF
          (Nekki_SF2_GUI_DebugModules_ScreenDebug_o *__this,System_String_o *KGLJICLJHEL,
          MethodInfo *method)

{
  return (UnityEngine_UI_Text_o *)0x0;
}


// ===== protected override void GIENGNEGHPJ()  [RVA 0x3528F98]
// Nekki.SF2.GUI.DebugModules.ScreenDebug$$GIENGNEGHPJ @ RVA 0x3528F98

void Nekki_SF2_GUI_DebugModules_ScreenDebug__GIENGNEGHPJ
               (Nekki_SF2_GUI_DebugModules_ScreenDebug_o *__this,MethodInfo *method)

{
  int32_t capacity;
  bool bVar1;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar2;
  System_Object_array *pSVar3;
  System_Collections_Generic_Stack_Text__o *pSVar4;
  UnityEngine_RectTransform_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_Dictionary_string__Text__o **ppSVar5;
  NDPMLPGANCI_o *__this_02;
  System_Action_GLINEGMOOBM__o *CJNHFNHJHPE;
  UnityEngine_Transform_o *__this_03;
  uint uVar6;
  long lVar7;
  Nekki_SF2_GUI_DebugModules_ScreenDebug_o *pNVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Rect_o UVar10;
  
  if ((DAT_04568a0a & 1) == 0) {
    FUN_01bab630(&System_Action<GLINEGMOOBM>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentsInChildren<Text>__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Text>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_Text>_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_DebugModules_ScreenDebug_OKNDDEJODAJ__);
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ScreenDebug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Stack<Text>_Push__);
    FUN_01bab630(&Method_System_Collections_Generic_Stack<Text>_get_Count__);
    DAT_04568a0a = 1;
  }
  Nekki_SF2_GUI_UIModule__GIENGNEGHPJ((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  pNVar8 = Nekki_SF2_GUI_DebugModules_ScreenDebug_TypeInfo->static_fields->FFOLFLCMFCH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar8 = Nekki_SF2_GUI_DebugModules_ScreenDebug_TypeInfo->static_fields->FFOLFLCMFCH;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)__this,
                       (MethodInfo *)0x0);
    if (bVar1) {
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Object__Destroy((UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
    }
  }
  Nekki_SF2_GUI_DebugModules_ScreenDebug_TypeInfo->static_fields->FFOLFLCMFCH = __this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_DebugModules_ScreenDebug_TypeInfo->static_fields,__this);
  pUVar2 = (__this->fields)._lineHolder;
  if ((pUVar2 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) &&
     (pSVar3 = UnityEngine_Component__GetComponentsInChildren<object>
                         ((UnityEngine_Component_o *)pUVar2,true,
                          Method_UnityEngine_Component_GetComponentsInChildren<Text>__),
     pSVar3 != (System_Object_array *)0x0)) {
    lVar7 = pSVar3->max_length;
    uVar6 = (uint)lVar7;
    while( true ) {
      uVar6 = uVar6 - 1;
      if ((int)uVar6 < 0) break;
      if ((uint)lVar7 <= uVar6) goto LAB_03629238;
      pSVar4 = (__this->fields).KAABNEFOJHJ;
      if (pSVar4 == (System_Collections_Generic_Stack_Text__o *)0x0) goto LAB_03629234;
      System_Collections_Generic_Stack<object>__Push
                ((System_Collections_Generic_Stack_T__o *)pSVar4,pSVar3->m_Items[uVar6],
                 Method_System_Collections_Generic_Stack<Text>_Push__);
      lVar7 = pSVar3->max_length;
    }
    if (lVar7 != 0) {
      if ((uint)lVar7 == 0) {
LAB_03629238:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      if (((UnityEngine_UI_Graphic_o *)pSVar3->m_Items[0] == (UnityEngine_UI_Graphic_o *)0x0) ||
         (__this_00 = UnityEngine_UI_Graphic__get_rectTransform
                                ((UnityEngine_UI_Graphic_o *)pSVar3->m_Items[0],(MethodInfo *)0x0),
         __this_00 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_03629234;
      UVar10 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
      (__this->fields).ELCCJMINMNI = UVar10.fields.m_Height;
    }
    pSVar4 = (__this->fields).KAABNEFOJHJ;
    if (pSVar4 != (System_Collections_Generic_Stack_Text__o *)0x0) {
      capacity = (pSVar4->fields)._size;
      __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_Text>_TypeInfo);
      System_Collections_Generic_Dictionary<object,_object>___ctor
                (__this_01,capacity,
                 Method_System_Collections_Generic_Dictionary<string,_Text>__ctor__);
      ppSVar5 = &(__this->fields).FEHFKJKABDN;
      *ppSVar5 = (System_Collections_Generic_Dictionary_string__Text__o *)__this_01;
      thunk_FUN_01c20e04(ppSVar5,__this_01);
      __this_02 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      CJNHFNHJHPE = (System_Action_GLINEGMOOBM__o *)
                    thunk_FUN_01bda818(System_Action<GLINEGMOOBM>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_02 != (NDPMLPGANCI_o *)0x0) {
        NDPMLPGANCI__IIOPONEHEGP(__this_02,CJNHFNHJHPE,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._lineHolder;
        if ((pUVar2 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) &&
           (__this_03 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
           __this_03 != (UnityEngine_Transform_o *)0x0)) {
          UVar9 = UnityEngine_Transform__get_localPosition(__this_03,(MethodInfo *)0x0);
          (__this->fields).HAFEGAEOPGM = UVar9.fields.y + (__this->fields).ELCCJMINMNI;
          return;
        }
      }
    }
  }
LAB_03629234:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ShowDebugLine(string HKJPKDKDKAG, string EHNFGMGKCHO, Color EFJKPCADGJH)  [RVA 0x3528F2C]
// Nekki.SF2.GUI.DebugModules.ScreenDebug$$ShowDebugLine @ RVA 0x3528F2C

void Nekki_SF2_GUI_DebugModules_ScreenDebug__ShowDebugLine
               (Nekki_SF2_GUI_DebugModules_ScreenDebug_o *__this,System_String_o *HKJPKDKDKAG,
               System_String_o *EHNFGMGKCHO,UnityEngine_Color_o EFJKPCADGJH,MethodInfo *method)

{
  bool bVar1;
  System_String_o *extraout_x1;
  
  if ((DAT_04568a0b & 1) == 0) {
    FUN_01bab630(EFJKPCADGJH.fields.r,EFJKPCADGJH.fields.g,EFJKPCADGJH.fields.b,EFJKPCADGJH.fields.a
                 ,&UnityEngine_Object_TypeInfo);
    DAT_04568a0b = 1;
    HKJPKDKDKAG = extraout_x1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,HKJPKDKDKAG);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)0x0,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void CLNAOMIIBLH()  [RVA 0x3529470]
// Nekki.SF2.GUI.DebugModules.ScreenDebug$$CLNAOMIIBLH @ RVA 0x3529470

void Nekki_SF2_GUI_DebugModules_ScreenDebug__CLNAOMIIBLH
               (Nekki_SF2_GUI_DebugModules_ScreenDebug_o *__this,MethodInfo *method)

{
  NDPMLPGANCI_o *__this_00;
  System_Action_GLINEGMOOBM__o *CJNHFNHJHPE;
  
  if ((DAT_04568a0c & 1) == 0) {
    FUN_01bab630(&System_Action<GLINEGMOOBM>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_DebugModules_ScreenDebug_OKNDDEJODAJ__);
    DAT_04568a0c = 1;
  }
  Nekki_SF2_GUI_UIModule__CLNAOMIIBLH((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_GLINEGMOOBM__o *)
                thunk_FUN_01bda818(System_Action<GLINEGMOOBM>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__JBFHBECEOAP(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3529518]
// Nekki.SF2.GUI.DebugModules.ScreenDebug$$.ctor @ RVA 0x3529518

void Nekki_SF2_GUI_DebugModules_ScreenDebug___ctor
               (Nekki_SF2_GUI_DebugModules_ScreenDebug_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Stack_Text__o *__this_00;
  System_Collections_Generic_Stack_Text__o **ppSVar1;
  System_Text_StringBuilder_o *__this_01;
  System_Text_StringBuilder_o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568a0d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Stack<Text>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Stack<Text>_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    DAT_04568a0d = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Stack_Text__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Stack<Text>_TypeInfo,method);
  System_Collections_Generic_Stack<object>___ctor
            ((System_Collections_Generic_Stack_T__o *)__this_00,
             Method_System_Collections_Generic_Stack<Text>__ctor__);
  ppSVar1 = &(__this->fields).KAABNEFOJHJ;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this_01,(MethodInfo *)0x0);
  ppSVar2 = &(__this->fields).LJLADKMLDEF;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  Nekki_SF2_GUI_DebugUIModule___ctor((Nekki_SF2_GUI_DebugUIModule_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static ScreenDebug get_Current()  [RVA 0x35295D8]
// Nekki.SF2.GUI.DebugModules.ScreenDebug$$get_Current @ RVA 0x35295D8

Nekki_SF2_GUI_DebugModules_ScreenDebug_o *
Nekki_SF2_GUI_DebugModules_ScreenDebug__get_Current(MethodInfo *method)

{
  if ((DAT_04568a0e & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ScreenDebug_TypeInfo);
    DAT_04568a0e = 1;
  }
  return Nekki_SF2_GUI_DebugModules_ScreenDebug_TypeInfo->static_fields->FFOLFLCMFCH;
}


// ===== private void MBAEBKFKHEI(Text CJJNBBIFAPM, string HKJPKDKDKAG, string EHNFGMGKCHO)  [RVA 0x352923C]
// Nekki.SF2.GUI.DebugModules.ScreenDebug$$MBAEBKFKHEI @ RVA 0x352923C

void Nekki_SF2_GUI_DebugModules_ScreenDebug__MBAEBKFKHEI
               (Nekki_SF2_GUI_DebugModules_ScreenDebug_o *__this,UnityEngine_UI_Text_o *CJJNBBIFAPM,
               System_String_o *HKJPKDKDKAG,System_String_o *EHNFGMGKCHO,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Text_StringBuilder_o *pSVar3;
  Il2CppObject *arg0;
  UnityEngine_RectTransform_o *__this_00;
  undefined8 uVar4;
  UnityEngine_GameObject_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  float fVar6;
  UnityEngine_Vector2_o value;
  int32_t local_34;
  
  if ((DAT_04568a0f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Text>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Text>_ContainsKey__);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&StringLiteral_255/*" : "*/);
    FUN_01bab630(&StringLiteral_15636/*"[{0}]"*/);
    DAT_04568a0f = 1;
  }
  pSVar3 = (__this->fields).LJLADKMLDEF;
  if (pSVar3 != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Clear(pSVar3,(MethodInfo *)0x0);
    pSVar3 = (__this->fields).LJLADKMLDEF;
    local_34 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
    arg0 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
    if (pSVar3 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__AppendFormat(pSVar3,StringLiteral_15636/*"[{0}]"*/,arg0,(MethodInfo *)0x0);
      pSVar3 = (__this->fields).LJLADKMLDEF;
      if (pSVar3 != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__Append(pSVar3,HKJPKDKDKAG,(MethodInfo *)0x0);
        pSVar3 = (__this->fields).LJLADKMLDEF;
        if (pSVar3 != (System_Text_StringBuilder_o *)0x0) {
          System_Text_StringBuilder__Append(pSVar3,StringLiteral_255/*" : "*/,(MethodInfo *)0x0);
          pSVar3 = (__this->fields).LJLADKMLDEF;
          if (pSVar3 != (System_Text_StringBuilder_o *)0x0) {
            System_Text_StringBuilder__Append(pSVar3,EHNFGMGKCHO,(MethodInfo *)0x0);
            iVar2 = PCOEHCPGBBG__DGMBALOKJDJ(EHNFGMGKCHO,10,(MethodInfo *)0x0);
            if (CJJNBBIFAPM != (UnityEngine_UI_Text_o *)0x0) {
              __this_00 = UnityEngine_UI_Graphic__get_rectTransform
                                    ((UnityEngine_UI_Graphic_o *)CJJNBBIFAPM,(MethodInfo *)0x0);
              if (DAT_0455fffe == '\0') {
                FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
                DAT_0455fffe = '\x01';
              }
              if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
                fVar6 = (__this->fields).ELCCJMINMNI;
                value.fields.y =
                     fVar6 * (UnityEngine_Vector2_TypeInfo->static_fields->upVector).fields.y *
                     (float)(iVar2 + 1);
                value.fields.x =
                     fVar6 * (UnityEngine_Vector2_TypeInfo->static_fields->upVector).fields.x *
                     (float)(iVar2 + 1);
                UnityEngine_RectTransform__set_sizeDelta(__this_00,value,(MethodInfo *)0x0);
                pSVar3 = (__this->fields).LJLADKMLDEF;
                if (pSVar3 != (System_Text_StringBuilder_o *)0x0) {
                  uVar4 = (*(pSVar3->klass->vtable)._3_ToString.methodPtr)
                                    (pSVar3,(pSVar3->klass->vtable)._3_ToString.method);
                  (*(CJJNBBIFAPM->klass->vtable)._75_set_text.methodPtr)
                            (CJJNBBIFAPM,uVar4,(CJJNBBIFAPM->klass->vtable)._75_set_text.method);
                  __this_01 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)CJJNBBIFAPM,(MethodInfo *)0x0);
                  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
                    UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
                    pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                             (__this->fields).FEHFKJKABDN;
                    if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                      bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                                        (pSVar5,(Il2CppObject *)HKJPKDKDKAG,
                                         Method_System_Collections_Generic_Dictionary<string,_Text>_ContainsKey__
                                        );
                      if (!bVar1) {
                        pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                                 (__this->fields).FEHFKJKABDN;
                        if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0
                           ) goto LAB_0362946c;
                        System_Collections_Generic_Dictionary<object,_object>__Add
                                  (pSVar5,(Il2CppObject *)HKJPKDKDKAG,(Il2CppObject *)CJJNBBIFAPM,
                                   Method_System_Collections_Generic_Dictionary<string,_Text>_Add__)
                        ;
                      }
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
LAB_0362946c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OKNDDEJODAJ(GLINEGMOOBM HBHPFKJMGCK)  [RVA 0x3529620]
// Nekki.SF2.GUI.DebugModules.ScreenDebug$$OKNDDEJODAJ @ RVA 0x3529620

void Nekki_SF2_GUI_DebugModules_ScreenDebug__OKNDDEJODAJ
               (Nekki_SF2_GUI_DebugModules_ScreenDebug_o *__this,GLINEGMOOBM_o *HBHPFKJMGCK,
               MethodInfo *method)

{
  Il2CppObject *item;
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  UnityEngine_GameObject_o *__this_00;
  System_Collections_Generic_Stack_Text__o *__this_01;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_98;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_70;
  
  if ((DAT_04568a10 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Text>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Text>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_Text>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_Text>_MoveNext__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_Text>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_Text>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_Stack<Text>_Push__);
    DAT_04568a10 = 1;
  }
  local_70.fields._getEnumeratorRetType = 0;
  local_70.fields._36_4_ = 0;
  local_70.fields._version = 0;
  local_70.fields._index = 0;
  local_70.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_70.fields._current.fields.value = (Il2CppObject *)0x0;
  local_70.fields._current.fields.key = (Il2CppObject *)0x0;
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).FEHFKJKABDN;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              (&local_98,pSVar2,
               Method_System_Collections_Generic_Dictionary<string,_Text>_GetEnumerator__);
    local_70.fields._version = local_98.fields._version;
    local_70.fields._index = local_98.fields._index;
    local_70.fields._dictionary = local_98.fields._dictionary;
    local_70.fields._current.fields.value = local_98.fields._current.fields.value;
    local_70.fields._current.fields.key = local_98.fields._current.fields.key;
    local_70.fields._getEnumeratorRetType = local_98.fields._getEnumeratorRetType;
    local_70.fields._36_4_ = local_98.fields._36_4_;
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_Text>_MoveNext__
                        );
      item = local_70.fields._current.fields.value;
      if (!bVar1) break;
      if ((UnityEngine_Component_o *)local_70.fields._current.fields.value ==
          (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)local_70.fields._current.fields.value,
                             (MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      (**(code **)&((UnityEngine_Component_c *)item->klass)[1]._2.naturalAligment)
                (0,0,0,0x3f800000,item,
                 ((UnityEngine_Component_c *)item->klass)[1].vtable._0_Equals.methodPtr);
      __this_01 = (__this->fields).KAABNEFOJHJ;
      if (__this_01 == (System_Collections_Generic_Stack_Text__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_Stack<object>__Push
                ((System_Collections_Generic_Stack_T__o *)__this_01,item,
                 Method_System_Collections_Generic_Stack<Text>_Push__);
    }
    System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
              (&local_70,
               Method_System_Collections_Generic_Dictionary_Enumerator<string,_Text>_Dispose__);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).FEHFKJKABDN
    ;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__Clear
                (pSVar2,Method_System_Collections_Generic_Dictionary<string,_Text>_Clear__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

