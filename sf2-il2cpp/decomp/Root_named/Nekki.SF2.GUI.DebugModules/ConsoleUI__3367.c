// TypeDefIndex 3367
// Namespace: Nekki.SF2.GUI.DebugModules
// public sealed class ConsoleUI : DebugUIModule
// Fields:
//   private RectTransform _cachedRectTransform; // 0x28
//   private RectTransform _Window; // 0x30
//   private GameObject _logButton; // 0x38
//   private GameObject _tabButton; // 0x40
//   private Text _tabButtonText; // 0x48
//   private GameObject _logContent; // 0x50
//   private GameObject _buttonsContent; // 0x58
//   private GridLayoutGroup _buttonsGroup; // 0x60
//   private RectTransform _tabButtonsRect; // 0x68
//   private List<Toggle> _tabButtons; // 0x70
//   private List<Text> _tabButtonNames; // 0x78
//   private List<Text> _buttonNames; // 0x80
//   private Text _textEntry; // 0x88
//   private RectTransform _textRoot; // 0x90
//   private InputField _Input; // 0x98
//   private Button _NextCommandButton; // 0xA0
//   private Button _PrevCommandButton; // 0xA8
//   private ScrollRect _scrollRect; // 0xB0
//   private const float FAIENLHDKNC = 1.7777778;
//   private const char EEEGPOBAJMA = '\x3b';
//   private static ConsoleUI <JPNBHEPPPNP>k__BackingField; // 0x0
//   private static Action PJEACOOPNDB; // 0x8
//   private static Action BOGNOKPMNAK; // 0x10
//   private static Action<bool> CPJFNBEJDON; // 0x18
//   private static readonly StringBuilder BFKHNDJDKCA; // 0x20
//   private static readonly List<string> LIPCEDJDHIL; // 0x28
//   private int IABNCNEEGOE; // 0xB8
//   private float LOFKFMGMPJJ; // 0xBC
//   private float OPAAJPDHLOM; // 0xC0
//   private float GEPICMKIDJP; // 0xC4
//   private float NDMOOFMHHKL; // 0xC8
//   private static int BBGKBAMBOGA; // 0x30
//   private static int CAHAKKCIBIB; // 0x34
//   private static bool JODCCEKGOGE; // 0x38

// ===== public void OnToggleConsoleButton()  [RVA 0x353C620]
// Nekki.SF2.GUI.DebugModules.ConsoleUI$$OnToggleConsoleButton @ RVA 0x353C620

void Nekki_SF2_GUI_DebugModules_ConsoleUI__OnToggleConsoleButton
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_UI_InputField_o *pUVar3;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_Rect_o UVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o value;
  
  pUVar2 = (__this->fields)._cachedRectTransform;
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    UVar6 = UnityEngine_Transform__get_localPosition
                      ((UnityEngine_Transform_o *)pUVar2,(MethodInfo *)0x0);
    bVar1 = Nekki_SF2_GUI_DebugModules_ConsoleUI__get_IsWindowActive(__this,method_00);
    if (bVar1) {
      Nekki_SF2_GUI_DebugModules_ConsoleUI__CCCADFPJGJI(__this,false,in_x2);
      pUVar2 = (__this->fields)._Window;
      if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
        pUVar4 = (__this->fields)._cachedRectTransform;
        UVar5 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
          value.fields.y = UVar6.fields.y + UVar5.fields.m_Height;
          value.fields.z = UVar6.fields.z + 0.0;
          value.fields.x = UVar6.fields.x + 0.0;
          UnityEngine_Transform__set_localPosition
                    ((UnityEngine_Transform_o *)pUVar4,value,(MethodInfo *)0x0);
          pUVar3 = (__this->fields)._Input;
          if (pUVar3 != (UnityEngine_UI_InputField_o *)0x0) {
            UnityEngine_UI_InputField__DeactivateInputField(pUVar3,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else {
      Nekki_SF2_GUI_DebugModules_ConsoleUI__CCCADFPJGJI(__this,true,in_x2);
      pUVar2 = (__this->fields)._Window;
      if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
        pUVar4 = (__this->fields)._cachedRectTransform;
        UVar5 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
          UVar6.fields.y = UVar6.fields.y - UVar5.fields.m_Height;
          UnityEngine_Transform__set_localPosition
                    ((UnityEngine_Transform_o *)pUVar4,UVar6,(MethodInfo *)0x0);
          pUVar3 = (__this->fields)._Input;
          if (pUVar3 != (UnityEngine_UI_InputField_o *)0x0) {
            UnityEngine_UI_InputField__ActivateInputField(pUVar3,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AINKNNKAGCI(string EHNFGMGKCHO)  [RVA 0x353C7F0]
// Nekki.SF2.GUI.DebugModules.ConsoleUI$$AINKNNKAGCI @ RVA 0x353C7F0

void Nekki_SF2_GUI_DebugModules_ConsoleUI__AINKNNKAGCI
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,System_String_o *EHNFGMGKCHO,
               MethodInfo *method)

{
  UnityEngine_UI_Text_o *original;
  UnityEngine_RectTransform_o *parent;
  Il2CppObject *pIVar1;
  
  if ((DAT_04568ac6 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<Text>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568ac6 = 1;
  }
  original = (__this->fields)._textEntry;
  parent = (__this->fields)._textRoot;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar1 = UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)original,(UnityEngine_Transform_o *)parent,
                      Method_UnityEngine_Object_Instantiate<Text>__);
  if (pIVar1 != (Il2CppObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0363c884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pIVar1->klass->vtable[0x4b].methodPtr)(pIVar1,EHNFGMGKCHO,pIVar1->klass->vtable[0x4b].method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void Log(string JEGADCHPBOO)  [RVA 0x353C88C]
// Nekki.SF2.GUI.DebugModules.ConsoleUI$$Log @ RVA 0x353C88C

void Nekki_SF2_GUI_DebugModules_ConsoleUI__Log(System_String_o *JEGADCHPBOO,MethodInfo *method)

{
  bool bVar1;
  System_Text_StringBuilder_o *__this;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *extraout_x1_05;
  MethodInfo *pMVar2;
  Nekki_SF2_GUI_DebugModules_ConsoleUI_o *pNVar3;
  
  if ((DAT_04568ac7 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568ac7 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_0456720a == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    DAT_0456720a = '\x01';
    method = extraout_x1_01;
  }
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo,method);
    method = extraout_x1_02;
  }
  pNVar3 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->
           _JPNBHEPPPNP_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  pMVar2 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
  }
  if (bVar1) {
    if (DAT_0456720a == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
      DAT_0456720a = '\x01';
    }
    if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar3 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->
             _JPNBHEPPPNP_k__BackingField;
    if (pNVar3 != (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *)0x0) {
      Nekki_SF2_GUI_DebugModules_ConsoleUI__AINKNNKAGCI(pNVar3,JEGADCHPBOO,pMVar2);
      pMVar2 = extraout_x1_03;
      if (DAT_0456720a == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
        DAT_0456720a = '\x01';
        pMVar2 = extraout_x1_04;
      }
      if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar2 = extraout_x1_05;
      }
      pNVar3 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->
               _JPNBHEPPPNP_k__BackingField;
      if (pNVar3 != (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *)0x0) {
        Nekki_SF2_GUI_DebugModules_ConsoleUI__GNKEIGHLPEE(pNVar3,pMVar2);
        return;
      }
    }
  }
  else {
    __this = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->BFKHNDJDKCA;
    if (__this != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__AppendLine(__this,JEGADCHPBOO,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AGLPNKBMLCP()  [RVA 0x353CA50]
// Nekki.SF2.GUI.DebugModules.ConsoleUI$$AGLPNKBMLCP @ RVA 0x353CA50

void Nekki_SF2_GUI_DebugModules_ConsoleUI__AGLPNKBMLCP
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str3;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Text__o *pSVar2;
  MIJPCDHFBPA_o *pMVar3;
  System_Collections_Generic_List_ANMHMMJOHJG__o *pSVar4;
  UnityEngine_UI_Text_o *pUVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  int local_24;
  
  if ((DAT_04568ac8 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    FUN_01bab630(&IGNCJNPCAEN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Text>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ANMHMMJOHJG>_get_Count__);
    FUN_01bab630(&StringLiteral_12789/*"Tab "*/);
    FUN_01bab630(&StringLiteral_1492/*"/"*/);
    DAT_04568ac8 = 1;
    method = extraout_x1;
  }
  pUVar5 = (__this->fields)._tabButtonText;
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo,method);
  }
  pSVar2 = (__this->fields)._tabButtonNames;
  if (pSVar2 != (System_Collections_Generic_List_Text__o *)0x0) {
    iVar6 = (pSVar2->fields)._size;
    local_24 = 0;
    if (iVar6 != 0) {
      local_24 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->CAHAKKCIBIB / iVar6;
    }
    local_24 = local_24 + 1;
    pSVar1 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
    pMVar3 = IGNCJNPCAEN_TypeInfo->static_fields->PDMKGCMHBJF;
    if (((pMVar3 != (MIJPCDHFBPA_o *)0x0) &&
        (pSVar4 = (pMVar3->fields)._HFKPAOAKEHD_k__BackingField,
        pSVar4 != (System_Collections_Generic_List_ANMHMMJOHJG__o *)0x0)) &&
       (pSVar2 = (__this->fields)._tabButtonNames,
       pSVar2 != (System_Collections_Generic_List_Text__o *)0x0)) {
      iVar6 = (pSVar4->fields)._size;
      iVar7 = (pSVar2->fields)._size;
      if (DAT_0456033d == '\0') {
        FUN_01bab630(&System_Math_TypeInfo);
        DAT_0456033d = '\x01';
      }
      fVar8 = (float)iVar6 / (float)iVar7;
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      local_24 = -0x80000000;
      if ((float)(int)fVar8 != INFINITY) {
        local_24 = (int)fVar8;
      }
      str3 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
      pSVar1 = System_String__Concat
                         (StringLiteral_12789/*"Tab "*/,pSVar1,StringLiteral_1492/*"/"*/,str3,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
                  (pUVar5,pSVar1,(pUVar5->klass->vtable)._75_set_text.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void Update()  [RVA 0x353CC10]
// Nekki.SF2.GUI.DebugModules.ConsoleUI$$Update @ RVA 0x353CC10

void Nekki_SF2_GUI_DebugModules_ConsoleUI__Update
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  UnityEngine_UI_GridLayoutGroup_o *pUVar4;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  UnityEngine_RectTransform_o *__this_00;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector2_o UVar9;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  
  fVar8 = (__this->fields).OPAAJPDHLOM;
  if (DAT_045602fa == '\0') {
    FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
    DAT_045602fa = '\x01';
  }
  fVar5 = ABS(fVar8);
  if (fVar5 <= 1.0) {
    fVar5 = 1.0;
  }
  fVar6 = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon * 8.0;
  fVar7 = fVar5 * 1e-06;
  if (fVar5 * 1e-06 <= fVar6) {
    fVar7 = fVar6;
  }
  if (fVar7 <= ABS(-1.0 - fVar8)) {
    fVar8 = (__this->fields).NDMOOFMHHKL;
    iVar2 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
    iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
    if (DAT_045602fa == '\0') {
      FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
      DAT_045602fa = '\x01';
    }
    fVar5 = ABS(fVar8);
    fVar7 = ABS((float)iVar2 / (float)iVar3);
    if (fVar5 <= fVar7) {
      fVar5 = fVar7;
    }
    fVar6 = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon * 8.0;
    fVar7 = fVar5 * 1e-06;
    if (fVar5 * 1e-06 <= fVar6) {
      fVar7 = fVar6;
    }
    if (fVar7 <= ABS((float)iVar2 / (float)iVar3 - fVar8)) {
      iVar2 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
      iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
      __this_00 = (__this->fields)._tabButtonsRect;
      (__this->fields).NDMOOFMHHKL = (float)iVar2 / (float)iVar3;
      if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
        fVar5 = (__this->fields).LOFKFMGMPJJ;
        fVar8 = ((float)iVar2 / (float)iVar3) / 1.7777778;
        UVar9 = UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
        UVar9.fields.x = fVar8 * fVar5;
        UnityEngine_RectTransform__set_sizeDelta(__this_00,UVar9,(MethodInfo *)0x0);
        pUVar4 = (__this->fields)._buttonsGroup;
        if (pUVar4 != (UnityEngine_UI_GridLayoutGroup_o *)0x0) {
          value.fields.y = (pUVar4->fields).m_Spacing.fields.y;
          value.fields.x = fVar8 * (__this->fields).OPAAJPDHLOM;
          UnityEngine_UI_GridLayoutGroup__set_cellSize(pUVar4,value,(MethodInfo *)0x0);
          pUVar4 = (__this->fields)._buttonsGroup;
          if (pUVar4 != (UnityEngine_UI_GridLayoutGroup_o *)0x0) {
            value_00.fields.y = (float)(pUVar4->fields).m_ConstraintCount;
            value_00.fields.x = fVar8 * (__this->fields).GEPICMKIDJP;
            UnityEngine_UI_GridLayoutGroup__set_spacing(pUVar4,value_00,(MethodInfo *)0x0);
            goto LAB_0363cda4;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
LAB_0363cda4:
  bVar1 = UnityEngine_Input__GetKeyDown(0x60,(MethodInfo *)0x0);
  method_01 = method_00;
  if (bVar1) {
    Nekki_SF2_GUI_DebugModules_ConsoleUI__OnToggleConsoleButton(__this,method_00);
    method_01 = extraout_x1;
  }
  bVar1 = Nekki_SF2_GUI_DebugModules_ConsoleUI__get_IsWindowActive(__this,method_01);
  if (bVar1) {
    bVar1 = UnityEngine_Input__GetKeyDown(9,(MethodInfo *)0x0);
    if (bVar1) {
      Nekki_SF2_GUI_DebugModules_ConsoleUI__OnToggleConsoleMode(__this,method_02);
    }
    bVar1 = UnityEngine_Input__GetKeyDown(0x111,(MethodInfo *)0x0);
    if (bVar1) {
      Nekki_SF2_GUI_DebugModules_ConsoleUI__SelectPrevCommand(__this,method_03);
    }
    bVar1 = UnityEngine_Input__GetKeyDown(0x112,(MethodInfo *)0x0);
    if (bVar1) {
      Nekki_SF2_GUI_DebugModules_ConsoleUI__SelectNextCommand(__this,method_04);
      return;
    }
  }
  return;
}


// ===== public static ConsoleUI get_Current()  [RVA 0x353D274]
// Nekki.SF2.GUI.DebugModules.ConsoleUI$$get_Current @ RVA 0x353D274

Nekki_SF2_GUI_DebugModules_ConsoleUI_o *
Nekki_SF2_GUI_DebugModules_ConsoleUI__get_Current(MethodInfo *method)

{
  if ((DAT_04568ac9 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    DAT_04568ac9 = 1;
  }
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField;
}


// ===== public static void remove_OnConsoleActive(Action<bool> CJNHFNHJHPE)  [RVA 0x353D2CC]
// Nekki.SF2.GUI.DebugModules.ConsoleUI$$remove_OnConsoleActive @ RVA 0x353D2CC

void Nekki_SF2_GUI_DebugModules_ConsoleUI__remove_OnConsoleActive
               (System_Action_bool__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_bool__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_bool__o *pSVar5;
  MethodInfo *extraout_x1;
  System_Action_bool__o *source;
  
  if ((DAT_04568aca & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    DAT_04568aca = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo,method);
  }
  source = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->CPJFNBEJDON;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<bool>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<bool>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = (System_Action_bool__o *)
             FUN_01c07368(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->CPJFNBEJDON
                          ,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void SelectNextCommand()  [RVA 0x353D144]
// Nekki.SF2.GUI.DebugModules.ConsoleUI$$SelectNextCommand @ RVA 0x353D144

void Nekki_SF2_GUI_DebugModules_ConsoleUI__SelectNextCommand
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,MethodInfo *method)

{
  int iVar1;
  Nekki_SF2_GUI_DebugModules_ConsoleUI_c *pNVar2;
  System_String_o *pSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  System_Collections_Generic_List_string__o *__this_00;
  UnityEngine_UI_InputField_o *pUVar4;
  
  if ((DAT_04568acb & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    DAT_04568acb = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo,method);
    method = extraout_x1_00;
  }
  pNVar2 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo;
  __this_00 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->LIPCEDJDHIL;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    if ((__this_00->fields)._size < 1) {
      return;
    }
    iVar1 = (__this->fields).IABNCNEEGOE + 1;
    (__this->fields).IABNCNEEGOE = iVar1;
    if ((pNVar2->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(pNVar2,method);
      __this_00 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->LIPCEDJDHIL;
      pNVar2 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo;
      method = extraout_x1_01;
      if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_0363d270;
    }
    if ((__this_00->fields)._size <= iVar1) {
      (__this->fields).IABNCNEEGOE = 0;
    }
    pUVar4 = (__this->fields)._Input;
    if ((pNVar2->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(pNVar2,method);
      __this_00 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->LIPCEDJDHIL;
      if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_0363d270;
    }
    pSVar3 = (System_String_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,
                        (__this->fields).IABNCNEEGOE,
                        Method_System_Collections_Generic_List<string>_get_Item__);
    if (pUVar4 != (UnityEngine_UI_InputField_o *)0x0) {
      UnityEngine_UI_InputField__set_text(pUVar4,pSVar3,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._Input;
      if ((pUVar4 != (UnityEngine_UI_InputField_o *)0x0) &&
         (pSVar3 = (pUVar4->fields).m_Text, pSVar3 != (System_String_o *)0x0)) {
        UnityEngine_UI_InputField__set_caretPosition
                  (pUVar4,(pSVar3->fields)._stringLength,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0363d270:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnSubmit()  [RVA 0x353D3C0]
// Nekki.SF2.GUI.DebugModules.ConsoleUI$$OnSubmit @ RVA 0x353D3C0

void Nekki_SF2_GUI_DebugModules_ConsoleUI__OnSubmit
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  UnityEngine_UI_InputField_o *pUVar2;
  
  if ((DAT_04568acc & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568acc = 1;
    method = extraout_x1;
  }
  bVar1 = Nekki_SF2_GUI_DebugModules_ConsoleUI__get_IsWindowActive(__this,method);
  if (!bVar1) {
    return;
  }
  pUVar2 = (__this->fields)._Input;
  if (pUVar2 != (UnityEngine_UI_InputField_o *)0x0) {
    bVar1 = System_String__IsNullOrEmpty((pUVar2->fields).m_Text,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    pUVar2 = (__this->fields)._Input;
    if (pUVar2 != (UnityEngine_UI_InputField_o *)0x0) {
      Nekki_SF2_GUI_DebugModules_ConsoleUI__FIKOIBAMMEO(__this,(pUVar2->fields).m_Text,in_x2);
      pUVar2 = (__this->fields)._Input;
      if (pUVar2 != (UnityEngine_UI_InputField_o *)0x0) {
        UnityEngine_UI_InputField__set_text(pUVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._Input;
        if (pUVar2 != (UnityEngine_UI_InputField_o *)0x0) {
          UnityEngine_UI_InputField__ActivateInputField(pUVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnShowLogClick()  [RVA 0x353D6A8]
// Nekki.SF2.GUI.DebugModules.ConsoleUI$$OnShowLogClick @ RVA 0x353D6A8

void Nekki_SF2_GUI_DebugModules_ConsoleUI__OnShowLogClick
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568acd & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    FUN_01bab630(&StringLiteral_12788/*"Tab"*/);
    DAT_04568acd = 1;
    method = extraout_x1;
  }
  bVar1 = Nekki_SF2_GUI_DebugModules_ConsoleUI__get_IsWindowActive(__this,method);
  if (!bVar1) {
    return;
  }
  pUVar2 = (__this->fields)._buttonsContent;
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._logContent;
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->JODCCEKGOGE = false;
      pUVar3 = (__this->fields)._tabButtonText;
      if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0363d760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                  (pUVar3,StringLiteral_12788/*"Tab"*/,(pUVar3->klass->vtable)._75_set_text.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void JBJJOIHNIDF(ConsoleUI CJNHFNHJHPE)  [RVA 0x353D774]
// Nekki.SF2.GUI.DebugModules.ConsoleUI$$JBJJOIHNIDF @ RVA 0x353D774

void Nekki_SF2_GUI_DebugModules_ConsoleUI__JBJJOIHNIDF
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04568ace & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    DAT_04568ace = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo,method);
  }
  Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField =
       CJNHFNHJHPE;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields,CJNHFNHJHPE);
  return;
}


// ===== private void GNKEIGHLPEE()  [RVA 0x353CA24]
// Nekki.SF2.GUI.DebugModules.ConsoleUI$$GNKEIGHLPEE @ RVA 0x353CA24

void Nekki_SF2_GUI_DebugModules_ConsoleUI__GNKEIGHLPEE
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *__this_00;
  
  UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
  __this_00 = (__this->fields)._scrollRect;
  if (__this_00 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition(__this_00,0.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FIKOIBAMMEO(string EFENHAFFBAG)  [RVA 0x353D468]
// Nekki.SF2.GUI.DebugModules.ConsoleUI$$FIKOIBAMMEO @ RVA 0x353D468

void Nekki_SF2_GUI_DebugModules_ConsoleUI__FIKOIBAMMEO
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,System_String_o *EFENHAFFBAG,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_String_o *__this_00;
  System_Collections_Generic_List_string__o *pSVar4;
  System_String_o *EHNFGMGKCHO;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *pMVar5;
  System_String_array *pSVar6;
  ulong uVar7;
  ulong uVar8;
  
  if ((DAT_04568acf & 1) == 0) {
    FUN_01bab630(&ConsoleDatabase_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Contains__);
    FUN_01bab630(&StringLiteral_2262/*"<b>{0}</b>"*/);
    DAT_04568acf = 1;
  }
  bVar3 = System_String__IsNullOrEmpty(EFENHAFFBAG,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  if ((ConsoleDatabase_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = ConsoleDatabase__FIKOIBAMMEO(EFENHAFFBAG,(MethodInfo *)0x0);
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
  }
  pSVar4 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->LIPCEDJDHIL;
  if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_0363d6a4;
  bVar3 = System_Collections_Generic_List<object>__Contains
                    ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)EFENHAFFBAG
                     ,Method_System_Collections_Generic_List<string>_Contains__);
  if (!bVar3) {
    if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    lVar2 = Method_System_Collections_Generic_List<string>_Add__;
    pSVar4 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->LIPCEDJDHIL;
    if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_0363d6a4;
    pSVar6 = (pSVar4->fields)._items;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (pSVar6 == (System_String_array *)0x0) goto LAB_0363d6a4;
    uVar1 = (pSVar4->fields)._size;
    if (uVar1 < (uint)pSVar6->max_length) {
      (pSVar4->fields)._size = uVar1 + 1;
      pSVar6->m_Items[(int)uVar1] = EFENHAFFBAG;
      thunk_FUN_01c20e04(pSVar6->m_Items + (int)uVar1,EFENHAFFBAG);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)EFENHAFFBAG,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  pMVar5 = (MethodInfo *)0x0;
  EHNFGMGKCHO = System_String__Format
                          (StringLiteral_2262/*"<b>{0}</b>"*/,(Il2CppObject *)EFENHAFFBAG,(MethodInfo *)0x0);
  Nekki_SF2_GUI_DebugModules_ConsoleUI__AINKNNKAGCI(__this,EHNFGMGKCHO,pMVar5);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__Log((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (System_String_o *)0x0) {
    pMVar5 = (MethodInfo *)0x0;
    pSVar6 = System_String__Split(__this_00,10,0,(MethodInfo *)0x0);
    if (pSVar6 != (System_String_array *)0x0) {
      method_00 = extraout_x1;
      if (0 < (int)pSVar6->max_length) {
        uVar8 = 0;
        uVar7 = pSVar6->max_length & 0xffffffff;
        do {
          if (uVar7 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          Nekki_SF2_GUI_DebugModules_ConsoleUI__AINKNNKAGCI(__this,pSVar6->m_Items[uVar8],pMVar5);
          uVar1 = (uint)pSVar6->max_length;
          uVar7 = (ulong)uVar1;
          uVar8 = uVar8 + 1;
          method_00 = extraout_x1_00;
        } while ((long)uVar8 < (long)(int)uVar1);
      }
      Nekki_SF2_GUI_DebugModules_ConsoleUI__GNKEIGHLPEE(__this,method_00);
      return;
    }
  }
LAB_0363d6a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_IsWindowActive()  [RVA 0x353C71C]
// Nekki.SF2.GUI.DebugModules.ConsoleUI$$get_IsWindowActive @ RVA 0x353C71C

bool Nekki_SF2_GUI_DebugModules_ConsoleUI__get_IsWindowActive
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._Window;
  if ((__this_00 != (UnityEngine_RectTransform_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void remove_OnConsoleDestroyed(Action CJNHFNHJHPE)  [RVA 0x353D7DC]
// Nekki.SF2.GUI.DebugModules.ConsoleUI$$remove_OnConsoleDestroyed @ RVA 0x353D7DC

void Nekki_SF2_GUI_DebugModules_ConsoleUI__remove_OnConsoleDestroyed
               (System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  MethodInfo *extraout_x1;
  System_Action_o *source;
  
  if ((DAT_04568ad0 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    DAT_04568ad0 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo,method);
  }
  source = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->BOGNOKPMNAK;
  do {
    pSVar2 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    if (pSVar2 != (System_Delegate_o *)0x0) {
      if ((System_Action_c *)pSVar2->klass != System_Action_TypeInfo) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar2);
      }
    }
    if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = (System_Action_o *)
             FUN_01c07368(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->BOGNOKPMNAK
                          ,pSVar2,source);
    bVar1 = source != pSVar3;
    source = pSVar3;
  } while (bVar1);
  return;
}


// ===== private static void .cctor()  [RVA 0x353D8B8]
// Nekki.SF2.GUI.DebugModules.ConsoleUI$$.cctor @ RVA 0x353D8B8

void Nekki_SF2_GUI_DebugModules_ConsoleUI___cctor(MethodInfo *method)

{
  System_Action_o *pSVar1;
  System_Action_o **ppSVar2;
  System_Action_bool__o *pSVar3;
  System_Action_bool__o **ppSVar4;
  System_Text_StringBuilder_o *__this;
  System_Text_StringBuilder_o **ppSVar5;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_string__o **ppSVar6;
  Nekki_SF2_GUI_DebugModules_ConsoleUI_StaticFields *pNVar7;
  
  if ((DAT_04568ad1 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_DebugModules_ConsoleUI_<>c_AINAIFEFEMF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_DebugModules_ConsoleUI_<>c_FMFEHBMDFNB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_DebugModules_ConsoleUI_<>c_LMBMLBOHENF__);
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_<>c_TypeInfo);
    DAT_04568ad1 = 1;
  }
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  ppSVar2 = &Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->PJEACOOPNDB;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  ppSVar2 = &Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->BOGNOKPMNAK;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar3 = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
  System_Action<bool>___ctor();
  ppSVar4 = &Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->CPJFNBEJDON;
  *ppSVar4 = pSVar3;
  thunk_FUN_01c20e04(ppSVar4,pSVar3);
  __this = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
  ppSVar5 = &Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->BFKHNDJDKCA;
  *ppSVar5 = __this;
  thunk_FUN_01c20e04(ppSVar5,__this);
  __this_00 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar6 = &Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->LIPCEDJDHIL;
  *ppSVar6 = __this_00;
  thunk_FUN_01c20e04(ppSVar6,__this_00);
  pNVar7 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields;
  pNVar7->BBGKBAMBOGA = -1;
  pNVar7->CAHAKKCIBIB = -0x80000000;
  return;
}


// ===== public static void add_OnConsoleActive(Action<bool> CJNHFNHJHPE)  [RVA 0x353DAF0]
// Nekki.SF2.GUI.DebugModules.ConsoleUI$$add_OnConsoleActive @ RVA 0x353DAF0

void Nekki_SF2_GUI_DebugModules_ConsoleUI__add_OnConsoleActive
               (System_Action_bool__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_bool__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_bool__o *pSVar5;
  MethodInfo *extraout_x1;
  System_Action_bool__o *a;
  
  if ((DAT_04568ad2 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    DAT_04568ad2 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo,method);
  }
  a = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->CPJFNBEJDON;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<bool>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<bool>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = (System_Action_bool__o *)
             FUN_01c07368(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->CPJFNBEJDON
                          ,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public static void remove_OnConsoleCreated(Action CJNHFNHJHPE)  [RVA 0x353DBE4]
// Nekki.SF2.GUI.DebugModules.ConsoleUI$$remove_OnConsoleCreated @ RVA 0x353DBE4

void Nekki_SF2_GUI_DebugModules_ConsoleUI__remove_OnConsoleCreated
               (System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  MethodInfo *extraout_x1;
  System_Action_o *source;
  
  if ((DAT_04568ad3 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    DAT_04568ad3 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo,method);
  }
  source = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->PJEACOOPNDB;
  do {
    pSVar2 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    if (pSVar2 != (System_Delegate_o *)0x0) {
      if ((System_Action_c *)pSVar2->klass != System_Action_TypeInfo) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar2);
      }
    }
    if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = (System_Action_o *)
             FUN_01c07368(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->PJEACOOPNDB
                          ,pSVar2,source);
    bVar1 = source != pSVar3;
    source = pSVar3;
  } while (bVar1);
  return;
}


// ===== public void SelectPrevCommand()  [RVA 0x353D018]
// Nekki.SF2.GUI.DebugModules.ConsoleUI$$SelectPrevCommand @ RVA 0x353D018

void Nekki_SF2_GUI_DebugModules_ConsoleUI__SelectPrevCommand
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,MethodInfo *method)

{
  int iVar1;
  Nekki_SF2_GUI_DebugModules_ConsoleUI_c *pNVar2;
  System_String_o *pSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  System_Collections_Generic_List_string__o *pSVar4;
  UnityEngine_UI_InputField_o *pUVar5;
  
  if ((DAT_04568ad4 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    DAT_04568ad4 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo,method);
    method = extraout_x1_00;
  }
  pNVar2 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo;
  pSVar4 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->LIPCEDJDHIL;
  if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
    if ((pSVar4->fields)._size < 1) {
      return;
    }
    iVar1 = (__this->fields).IABNCNEEGOE + -1;
    (__this->fields).IABNCNEEGOE = iVar1;
    if (iVar1 < 0) {
      if ((pNVar2->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(pNVar2,method);
        pSVar4 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->LIPCEDJDHIL;
        pNVar2 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo;
        method = extraout_x1_01;
        if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_0363d140;
      }
      (__this->fields).IABNCNEEGOE = (pSVar4->fields)._size + -1;
    }
    pUVar5 = (__this->fields)._Input;
    if ((pNVar2->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(pNVar2,method);
      pNVar2 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo;
    }
    pSVar4 = pNVar2->static_fields->LIPCEDJDHIL;
    if ((pSVar4 != (System_Collections_Generic_List_string__o *)0x0) &&
       (pSVar3 = (System_String_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar4,
                            (__this->fields).IABNCNEEGOE,
                            Method_System_Collections_Generic_List<string>_get_Item__),
       pUVar5 != (UnityEngine_UI_InputField_o *)0x0)) {
      UnityEngine_UI_InputField__set_text(pUVar5,pSVar3,(MethodInfo *)0x0);
      pUVar5 = (__this->fields)._Input;
      if ((pUVar5 != (UnityEngine_UI_InputField_o *)0x0) &&
         (pSVar3 = (pUVar5->fields).m_Text, pSVar3 != (System_String_o *)0x0)) {
        UnityEngine_UI_InputField__set_caretPosition
                  (pUVar5,(pSVar3->fields)._stringLength,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0363d140:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void Clear()  [RVA 0x353DCC0]
// Nekki.SF2.GUI.DebugModules.ConsoleUI$$Clear @ RVA 0x353DCC0

void Nekki_SF2_GUI_DebugModules_ConsoleUI__Clear(MethodInfo *method)

{
  bool bVar1;
  int index;
  System_Text_StringBuilder_o *__this;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Object_o *obj;
  Nekki_SF2_GUI_DebugModules_ConsoleUI_o *pNVar3;
  
  if ((DAT_04568ad5 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568ad5 = 1;
  }
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->BFKHNDJDKCA;
  if (__this != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Clear(__this,(MethodInfo *)0x0);
    if (DAT_0456720a == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
      DAT_0456720a = '\x01';
    }
    if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar3 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->
             _JPNBHEPPPNP_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_0456720a == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
        DAT_0456720a = '\x01';
      }
      if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar3 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->
               _JPNBHEPPPNP_k__BackingField;
      if ((pNVar3 == (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *)0x0) ||
         (pUVar2 = (pNVar3->fields)._textRoot, pUVar2 == (UnityEngine_RectTransform_o *)0x0))
      goto LAB_0363dea4;
      index = UnityEngine_Transform__get_childCount
                        ((UnityEngine_Transform_o *)pUVar2,(MethodInfo *)0x0);
      while (index = index + -1, -1 < index) {
        if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_0456720a == '\0') {
          FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
          DAT_0456720a = '\x01';
        }
        if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pNVar3 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->
                 _JPNBHEPPPNP_k__BackingField;
        if (((pNVar3 == (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *)0x0) ||
            (pUVar2 = (pNVar3->fields)._textRoot, pUVar2 == (UnityEngine_RectTransform_o *)0x0)) ||
           (__this_00 = UnityEngine_Transform__GetChild
                                  ((UnityEngine_Transform_o *)pUVar2,index,(MethodInfo *)0x0),
           __this_00 == (UnityEngine_Transform_o *)0x0)) goto LAB_0363dea4;
        obj = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
      }
    }
    return;
  }
LAB_0363dea4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnTabButtonSelect(int AFLLGJHOHHL)  [RVA 0x353DEA8]
// Nekki.SF2.GUI.DebugModules.ConsoleUI$$OnTabButtonSelect @ RVA 0x353DEA8

void Nekki_SF2_GUI_DebugModules_ConsoleUI__OnTabButtonSelect
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,int32_t AFLLGJHOHHL,
               MethodInfo *method)

{
  System_Collections_Generic_List_ANMHMMJOHJG__o *__this_00;
  Il2CppObject *pIVar1;
  System_Collections_Generic_List_Text__o *__this_01;
  Il2CppObject *pIVar2;
  UnityEngine_Component_o *__this_02;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *__this_03;
  Nekki_SF2_GUI_DebugModules_ConsoleUI_StaticFields *pNVar4;
  MIJPCDHFBPA_o *pMVar5;
  int index;
  System_Collections_Generic_List_object__o *__this_04;
  
  if ((DAT_04568ad6 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    FUN_01bab630(&IGNCJNPCAEN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Text>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MFELPDAPJGO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ANMHMMJOHJG>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MFELPDAPJGO>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Text>_get_Item__);
    DAT_04568ad6 = 1;
  }
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar4 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields;
  pNVar4->BBGKBAMBOGA = AFLLGJHOHHL;
  pMVar5 = IGNCJNPCAEN_TypeInfo->static_fields->PDMKGCMHBJF;
  if ((((pMVar5 != (MIJPCDHFBPA_o *)0x0) &&
       (__this_00 = (pMVar5->fields)._HFKPAOAKEHD_k__BackingField,
       __this_00 != (System_Collections_Generic_List_ANMHMMJOHJG__o *)0x0)) &&
      (pIVar1 = System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,
                           pNVar4->CAHAKKCIBIB + AFLLGJHOHHL,
                           Method_System_Collections_Generic_List<ANMHMMJOHJG>_get_Item__),
      pIVar1 != (Il2CppObject *)0x0)) &&
     (__this_01 = (__this->fields)._buttonNames,
     __this_01 != (System_Collections_Generic_List_Text__o *)0x0)) {
    __this_04 = pIVar1[1].monitor;
    index = 0;
    do {
      if ((__this_01->fields)._size <= index) {
        return;
      }
      if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) break;
      if (index < (__this_04->fields)._size) {
        pIVar1 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_01,index,
                            Method_System_Collections_Generic_List<Text>_get_Item__);
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           (__this_04,index,
                            Method_System_Collections_Generic_List<MFELPDAPJGO>_get_Item__);
        if ((pIVar2 == (Il2CppObject *)0x0) || (pIVar1 == (Il2CppObject *)0x0)) break;
                    /* try { // try from 0363dff4 to 0373e10b has its CatchHandler @ 0363dff4
                       catch() { ... } // from try @ 0363dff4 with catch @ 0363dff4
                       catch() { ... } // from try @ 0363e130 with catch @ 0363dff4
                       catch() { ... } // from try @ 0363e1b4 with catch @ 0363dff4
                       catch() { ... } // from try @ 0363e1e0 with catch @ 0363dff4
                       catch() { ... } // from try @ 0363e210 with catch @ 0363dff4 */
        (*pIVar1->klass->vtable[0x4b].methodPtr)
                  (pIVar1,pIVar2[1].klass,pIVar1->klass->vtable[0x4b].method);
        __this_01 = (__this->fields)._buttonNames;
        if (__this_01 == (System_Collections_Generic_List_Text__o *)0x0) break;
      }
      __this_02 = (UnityEngine_Component_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_01,index,
                             Method_System_Collections_Generic_List<Text>_get_Item__);
      if (((__this_02 == (UnityEngine_Component_o *)0x0) ||
          (pUVar3 = UnityEngine_Component__get_transform(__this_02,(MethodInfo *)0x0),
          pUVar3 == (UnityEngine_Transform_o *)0x0)) ||
         ((pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0),
          pUVar3 == (UnityEngine_Transform_o *)0x0 ||
          (__this_03 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
          __this_03 == (UnityEngine_GameObject_o *)0x0)))) break;
      UnityEngine_GameObject__SetActive
                (__this_03,index < (__this_04->fields)._size,(MethodInfo *)0x0);
      __this_01 = (__this->fields)._buttonNames;
      index = index + 1;
      if (__this_01 == (System_Collections_Generic_List_Text__o *)0x0) break;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CCCADFPJGJI(bool POFDNNBNINH)  [RVA 0x353C744]
// Nekki.SF2.GUI.DebugModules.ConsoleUI$$CCCADFPJGJI @ RVA 0x353C744

void Nekki_SF2_GUI_DebugModules_ConsoleUI__CCCADFPJGJI
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,bool POFDNNBNINH,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  System_Action_bool__o *pSVar1;
  
  if ((DAT_04568ad7 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    DAT_04568ad7 = 1;
  }
  __this_00 = (__this->fields)._Window;
  if ((__this_00 != (UnityEngine_RectTransform_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,POFDNNBNINH,(MethodInfo *)0x0);
    if ((__this->fields).super.super.__IsInited_k__BackingField == false) {
      return;
    }
    if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar1 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->CPJFNBEJDON;
    if (pSVar1 != (System_Action_bool__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0363c7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar1->fields).super.super.invoke_impl)
                ((pSVar1->fields).super.super.method_code,POFDNNBNINH,
                 (pSVar1->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void add_OnConsoleCreated(Action CJNHFNHJHPE)  [RVA 0x353E07C]
// Nekki.SF2.GUI.DebugModules.ConsoleUI$$add_OnConsoleCreated @ RVA 0x353E07C

void Nekki_SF2_GUI_DebugModules_ConsoleUI__add_OnConsoleCreated
               (System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  MethodInfo *extraout_x1;
  System_Action_o *a;
  
  if ((DAT_04568ad8 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    DAT_04568ad8 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo,method);
  }
  a = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->PJEACOOPNDB;
  do {
    pSVar2 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    if (pSVar2 != (System_Delegate_o *)0x0) {
      if ((System_Action_c *)pSVar2->klass != System_Action_TypeInfo) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar2);
      }
    }
                    /* try { // try from 0363e10c to 0373e113 has its CatchHandler @ 0363e1c0 */
    if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0363e128 to 0373e12f has its CatchHandler @ 0363e1bc */
                    /* try { // try from 0363e130 to 0373e1ab has its CatchHandler @ 0363dff4 */
    pSVar3 = (System_Action_o *)
             FUN_01c07368(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->PJEACOOPNDB
                          ,pSVar2,a);
    bVar1 = a != pSVar3;
    a = pSVar3;
  } while (bVar1);
  return;
}


// ===== protected override void CLNAOMIIBLH()  [RVA 0x353E158]
// Nekki.SF2.GUI.DebugModules.ConsoleUI$$CLNAOMIIBLH @ RVA 0x353E158

void Nekki_SF2_GUI_DebugModules_ConsoleUI__CLNAOMIIBLH
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  if ((DAT_04568ad9 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    DAT_04568ad9 = 1;
  }
  Nekki_SF2_GUI_UIModule__CLNAOMIIBLH((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0363e1ac to 0373e1b3 has its CatchHandler @ 0363e1b8 */
  pSVar1 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->BOGNOKPMNAK;
                    /* try { // try from 0363e1b4 to 0373e1db has its CatchHandler @ 0363dff4 */
  if (pSVar1 != (System_Action_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0363e1ac with catch @ 0363e1b8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0363e128 with catch @ 0363e1bc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0363e10c with catch @ 0363e1c0
                        */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    if (DAT_04568b3f == '\0') {
                    /* try { // try from 0363e1dc to 0373e1df has its CatchHandler @ 0363e200 */
      FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
                    /* try { // try from 0363e1e0 to 0373e207 has its CatchHandler @ 0363dff4 */
      DAT_04568b3f = '\x01';
    }
    if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* catch() { ... } // from try @ 0363e1dc with catch @ 0363e200 */
    Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField =
         (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *)0x0;
                    /* try { // try from 0363e208 to 0373e20f has its CatchHandler @ 0363e224 */
                    /* try { // try from 0363e210 to 0373e21b has its CatchHandler @ 0363dff4 */
    thunk_FUN_01c20e04(Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0363e21c to 0373e223 has its CatchHandler @ 0363e224 */
  FUN_01bab8c8();
}


// ===== public void OnChange()  [RVA 0x353E220]
// Nekki.SF2.GUI.DebugModules.ConsoleUI$$OnChange @ RVA 0x353E220

void Nekki_SF2_GUI_DebugModules_ConsoleUI__OnChange
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  undefined8 uVar2;
  UnityEngine_UI_InputField_o *__this_00;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0363e208 with catch @ 0363e224
                       catch(type#2 @ 00000000) { ... } // from try @ 0363e21c with catch @ 0363e224
                        */
  if ((DAT_04568ada & 1) == 0) {
    FUN_01bab630(&StringLiteral_16242/*"`"*/);
    auVar3 = FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568ada = 1;
  }
  uVar2 = auVar3._0_8_;
  __this_00 = (__this->fields)._Input;
  if ((__this_00 != (UnityEngine_UI_InputField_o *)0x0) &&
     (pSVar1 = (__this_00->fields).m_Text, uVar2 = 0, pSVar1 != (System_String_o *)0x0)) {
    pSVar1 = System_String__Replace(pSVar1,StringLiteral_16242/*"`"*/,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    UnityEngine_UI_InputField__set_text(__this_00,pSVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar2,auVar3._8_8_);
}


// ===== private void KBBCEDMNICL()  [RVA 0x353E2A4]
// Nekki.SF2.GUI.DebugModules.ConsoleUI$$KBBCEDMNICL @ RVA 0x353E2A4

void Nekki_SF2_GUI_DebugModules_ConsoleUI__KBBCEDMNICL
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  UnityEngine_Component_o *__this_00;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_Text__o *pSVar4;
  MIJPCDHFBPA_o *pMVar5;
  System_Collections_Generic_List_ANMHMMJOHJG__o *pSVar6;
  int index;
  
  if ((DAT_04568adb & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    FUN_01bab630(&IGNCJNPCAEN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Text>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ANMHMMJOHJG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ANMHMMJOHJG>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Text>_get_Item__);
    DAT_04568adb = 1;
    method = extraout_x1;
  }
  pSVar4 = (__this->fields)._tabButtonNames;
  if (pSVar4 != (System_Collections_Generic_List_Text__o *)0x0) {
    index = 0;
    do {
      if ((pSVar4->fields)._size <= index) {
        Nekki_SF2_GUI_DebugModules_ConsoleUI__AGLPNKBMLCP(__this,method);
        return;
      }
      if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pMVar5 = IGNCJNPCAEN_TypeInfo->static_fields->PDMKGCMHBJF;
      if ((pMVar5 == (MIJPCDHFBPA_o *)0x0) ||
         (pSVar6 = (pMVar5->fields)._HFKPAOAKEHD_k__BackingField,
         pSVar6 == (System_Collections_Generic_List_ANMHMMJOHJG__o *)0x0)) break;
      if (index + Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->CAHAKKCIBIB <
          (pSVar6->fields)._size) {
        pSVar4 = (__this->fields)._tabButtonNames;
        if (pSVar4 == (System_Collections_Generic_List_Text__o *)0x0) break;
        pIVar1 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar4,index,
                            Method_System_Collections_Generic_List<Text>_get_Item__);
        pMVar5 = IGNCJNPCAEN_TypeInfo->static_fields->PDMKGCMHBJF;
        if (pMVar5 == (MIJPCDHFBPA_o *)0x0) break;
        pSVar6 = (pMVar5->fields)._HFKPAOAKEHD_k__BackingField;
        if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (((pSVar6 == (System_Collections_Generic_List_ANMHMMJOHJG__o *)0x0) ||
            (pIVar2 = System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar6,
                                 index + Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->
                                         static_fields->CAHAKKCIBIB,
                                 Method_System_Collections_Generic_List<ANMHMMJOHJG>_get_Item__),
            pIVar2 == (Il2CppObject *)0x0)) || (pIVar1 == (Il2CppObject *)0x0)) break;
        (*pIVar1->klass->vtable[0x4b].methodPtr)
                  (pIVar1,pIVar2[1].klass,pIVar1->klass->vtable[0x4b].method);
      }
      pSVar4 = (__this->fields)._tabButtonNames;
      if (((pSVar4 == (System_Collections_Generic_List_Text__o *)0x0) ||
          (__this_00 = (UnityEngine_Component_o *)
                       System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar4,index,
                                  Method_System_Collections_Generic_List<Text>_get_Item__),
          __this_00 == (UnityEngine_Component_o *)0x0)) ||
         ((pUVar3 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0),
          pUVar3 == (UnityEngine_Transform_o *)0x0 ||
          (pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0),
          pUVar3 == (UnityEngine_Transform_o *)0x0)))) break;
      __this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
      if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
      }
      pMVar5 = IGNCJNPCAEN_TypeInfo->static_fields->PDMKGCMHBJF;
      if (((pMVar5 == (MIJPCDHFBPA_o *)0x0) ||
          (pSVar6 = (pMVar5->fields)._HFKPAOAKEHD_k__BackingField,
          pSVar6 == (System_Collections_Generic_List_ANMHMMJOHJG__o *)0x0)) ||
         (__this_01 == (UnityEngine_GameObject_o *)0x0)) break;
      UnityEngine_GameObject__SetActive
                (__this_01,
                 index + Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->CAHAKKCIBIB <
                 (pSVar6->fields)._size,(MethodInfo *)0x0);
      pSVar4 = (__this->fields)._tabButtonNames;
      index = index + 1;
      method = extraout_x1_00;
      if (pSVar4 == (System_Collections_Generic_List_Text__o *)0x0) break;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override bool ACBLFBAIHPN()  [RVA 0x353E4D0]
// Nekki.SF2.GUI.DebugModules.ConsoleUI$$ACBLFBAIHPN @ RVA 0x353E4D0

bool Nekki_SF2_GUI_DebugModules_ConsoleUI__ACBLFBAIHPN
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,MethodInfo *method)

{
  return true;
}


// ===== protected override void GIENGNEGHPJ()  [RVA 0x353E4D8]
// Nekki.SF2.GUI.DebugModules.ConsoleUI$$GIENGNEGHPJ @ RVA 0x353E4D8

void Nekki_SF2_GUI_DebugModules_ConsoleUI__GIENGNEGHPJ
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_DebugModules_ConsoleUI_c *pNVar4;
  System_Text_StringBuilder_o *pSVar5;
  System_String_o *__this_00;
  System_String_o *separator;
  System_String_array *NMMKGIMBHFF;
  System_Action_T__o *CPECAEHDDDB;
  System_Collections_Generic_List_Toggle__o *__this_01;
  UnityEngine_UI_Toggle_o *__this_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  UnityEngine_UI_GridLayoutGroup_o *pUVar6;
  MIJPCDHFBPA_o *pMVar7;
  System_Collections_Generic_List_ANMHMMJOHJG__o *pSVar8;
  Nekki_SF2_GUI_DebugModules_ConsoleUI_StaticFields *pNVar9;
  System_Action_o *pSVar10;
  System_Collections_Generic_List_Text__o *pSVar11;
  UnityEngine_Vector2_o UVar12;
  
  if ((DAT_04568adc & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_DebugModules_ConsoleUI_AINKNNKAGCI__);
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    FUN_01bab630(&Method_DFPABHGJPJJ_NHDPECDJBGO<string>__);
    FUN_01bab630(&IGNCJNPCAEN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Text>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ANMHMMJOHJG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Toggle>_get_Item__);
    DAT_04568adc = 1;
  }
  Nekki_SF2_GUI_UIModule__GIENGNEGHPJ((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04568b3f == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    DAT_04568b3f = '\x01';
  }
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField =
       __this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields,__this);
  pUVar2 = (__this->fields)._tabButtonsRect;
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    UVar12 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
    pUVar6 = (__this->fields)._buttonsGroup;
    (__this->fields).LOFKFMGMPJJ = UVar12.fields.x;
    if (pUVar6 != (UnityEngine_UI_GridLayoutGroup_o *)0x0) {
      (__this->fields).OPAAJPDHLOM = (pUVar6->fields).m_Spacing.fields.x;
      (__this->fields).GEPICMKIDJP = (float)(pUVar6->fields).m_Constraint;
      pMVar7 = IGNCJNPCAEN_TypeInfo->static_fields->PDMKGCMHBJF;
      if (((pMVar7 != (MIJPCDHFBPA_o *)0x0) &&
          (pSVar8 = (pMVar7->fields)._HFKPAOAKEHD_k__BackingField,
          pSVar8 != (System_Collections_Generic_List_ANMHMMJOHJG__o *)0x0)) &&
         (pUVar3 = (__this->fields)._logButton, pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar3,0 < (pSVar8->fields)._size,(MethodInfo *)0x0);
        pMVar7 = IGNCJNPCAEN_TypeInfo->static_fields->PDMKGCMHBJF;
        if (((pMVar7 != (MIJPCDHFBPA_o *)0x0) &&
            (pSVar8 = (pMVar7->fields)._HFKPAOAKEHD_k__BackingField,
            pSVar8 != (System_Collections_Generic_List_ANMHMMJOHJG__o *)0x0)) &&
           (pUVar3 = (__this->fields)._tabButton, pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar3,0 < (pSVar8->fields)._size,(MethodInfo *)0x0);
          pNVar9 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields;
          pNVar4 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo;
          if (pNVar9->CAHAKKCIBIB < 0) {
            pSVar11 = (__this->fields)._tabButtonNames;
            if (pSVar11 == (System_Collections_Generic_List_Text__o *)0x0) goto LAB_0363e854;
            iVar1 = (pSVar11->fields)._size;
            if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
              pNVar9 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields;
            }
            pNVar4 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo;
            pNVar9->CAHAKKCIBIB = -iVar1;
          }
          if ((pNVar4->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
            pNVar4 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo;
          }
          pSVar5 = pNVar4->static_fields->BFKHNDJDKCA;
          if (pSVar5 != (System_Text_StringBuilder_o *)0x0) {
            __this_00 = (System_String_o *)
                        (*(pSVar5->klass->vtable)._3_ToString.methodPtr)
                                  (pSVar5,(pSVar5->klass->vtable)._3_ToString.method);
            separator = System_Environment__get_NewLine((MethodInfo *)0x0);
            if (__this_00 != (System_String_o *)0x0) {
              NMMKGIMBHFF = System_String__Split(__this_00,separator,0,(MethodInfo *)0x0);
              CPECAEHDDDB = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo)
              ;
              System_Action<object>___ctor();
              DFPABHGJPJJ__NHDPECDJBGO<object>
                        ((System_Collections_Generic_IEnumerable_T__o *)NMMKGIMBHFF,CPECAEHDDDB,
                         Method_DFPABHGJPJJ_NHDPECDJBGO<string>__);
              Nekki_SF2_GUI_DebugModules_ConsoleUI__GNKEIGHLPEE(__this,method_00);
              pUVar2 = (__this->fields)._Window;
              if ((pUVar2 != (UnityEngine_RectTransform_o *)0x0) &&
                 (pUVar3 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
                 pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
                if (-1 < Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->CAHAKKCIBIB)
                {
                  pUVar3 = (__this->fields)._buttonsContent;
                  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_0363e854;
                  UnityEngine_GameObject__SetActive
                            (pUVar3,Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->
                                    JODCCEKGOGE,(MethodInfo *)0x0);
                  pUVar3 = (__this->fields)._logContent;
                  if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_0363e854;
                  UnityEngine_GameObject__SetActive
                            (pUVar3,Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->
                                    JODCCEKGOGE == false,(MethodInfo *)0x0);
                  Nekki_SF2_GUI_DebugModules_ConsoleUI__KBBCEDMNICL(__this,method_01);
                  __this_01 = (__this->fields)._tabButtons;
                  if ((__this_01 == (System_Collections_Generic_List_Toggle__o *)0x0) ||
                     (__this_02 = (UnityEngine_UI_Toggle_o *)
                                  System_Collections_Generic_List<object>__get_Item
                                            ((System_Collections_Generic_List_object__o *)__this_01,
                                             Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->
                                             static_fields->BBGKBAMBOGA,
                                             Method_System_Collections_Generic_List<Toggle>_get_Item__
                                            ), __this_02 == (UnityEngine_UI_Toggle_o *)0x0))
                  goto LAB_0363e854;
                  method_02 = (MethodInfo *)0x0;
                  UnityEngine_UI_Toggle__set_isOn(__this_02,true,(MethodInfo *)0x0);
                  Nekki_SF2_GUI_DebugModules_ConsoleUI__OnTabButtonSelect
                            (__this,Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->
                                    BBGKBAMBOGA,method_02);
                }
                if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pSVar10 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->PJEACOOPNDB;
                if (pSVar10 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0363e850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)(pSVar10->fields).super.super.invoke_impl)
                            ((pSVar10->fields).super.super.method_code,
                             (pSVar10->fields).super.super.method);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0363e854:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void add_OnConsoleDestroyed(Action CJNHFNHJHPE)  [RVA 0x353E858]
// Nekki.SF2.GUI.DebugModules.ConsoleUI$$add_OnConsoleDestroyed @ RVA 0x353E858

void Nekki_SF2_GUI_DebugModules_ConsoleUI__add_OnConsoleDestroyed
               (System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  MethodInfo *extraout_x1;
  System_Action_o *a;
  
  if ((DAT_04568add & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    DAT_04568add = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo,method);
  }
  a = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->BOGNOKPMNAK;
  do {
    pSVar2 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    if (pSVar2 != (System_Delegate_o *)0x0) {
      if ((System_Action_c *)pSVar2->klass != System_Action_TypeInfo) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar2);
      }
    }
    if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = (System_Action_o *)
             FUN_01c07368(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->BOGNOKPMNAK
                          ,pSVar2,a);
    bVar1 = a != pSVar3;
    a = pSVar3;
  } while (bVar1);
  return;
}


// ===== public void OnToggleConsoleMode()  [RVA 0x353CE40]
// Nekki.SF2.GUI.DebugModules.ConsoleUI$$OnToggleConsoleMode @ RVA 0x353CE40

void Nekki_SF2_GUI_DebugModules_ConsoleUI__OnToggleConsoleMode
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  System_Collections_Generic_List_Toggle__o *__this_00;
  UnityEngine_UI_Toggle_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *pMVar4;
  MethodInfo *method_00;
  MIJPCDHFBPA_o *pMVar5;
  System_Collections_Generic_List_ANMHMMJOHJG__o *pSVar6;
  Nekki_SF2_GUI_DebugModules_ConsoleUI_StaticFields *pNVar7;
  System_Collections_Generic_List_Text__o *pSVar8;
  
  if ((DAT_04568ade & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    FUN_01bab630(&IGNCJNPCAEN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Text>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ANMHMMJOHJG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Toggle>_get_Item__);
    DAT_04568ade = 1;
    method = extraout_x1;
  }
  bVar2 = Nekki_SF2_GUI_DebugModules_ConsoleUI__get_IsWindowActive(__this,method);
  if (!bVar2) {
    return;
  }
  pMVar5 = IGNCJNPCAEN_TypeInfo->static_fields->PDMKGCMHBJF;
  if ((pMVar5 != (MIJPCDHFBPA_o *)0x0) &&
     (pSVar6 = (pMVar5->fields)._HFKPAOAKEHD_k__BackingField,
     pSVar6 != (System_Collections_Generic_List_ANMHMMJOHJG__o *)0x0)) {
    if ((pSVar6->fields)._size < 1) {
      return;
    }
    pUVar3 = (__this->fields)._buttonsContent;
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
      if (!bVar2) {
        pUVar3 = (__this->fields)._buttonsContent;
        if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_0363d014;
        UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
        pUVar3 = (__this->fields)._logContent;
        if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_0363d014;
        UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
        pMVar4 = extraout_x1_00;
        if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pMVar4 = extraout_x1_01;
        }
        pNVar7 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields;
        pNVar7->JODCCEKGOGE = true;
        if (-1 < pNVar7->CAHAKKCIBIB) {
          Nekki_SF2_GUI_DebugModules_ConsoleUI__AGLPNKBMLCP(__this,pMVar4);
          return;
        }
      }
      __this_00 = (__this->fields)._tabButtons;
      if ((__this_00 != (System_Collections_Generic_List_Toggle__o *)0x0) &&
         (__this_01 = (UnityEngine_UI_Toggle_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_00,0,
                                 Method_System_Collections_Generic_List<Toggle>_get_Item__),
         __this_01 != (UnityEngine_UI_Toggle_o *)0x0)) {
        method_00 = (MethodInfo *)0x0;
        UnityEngine_UI_Toggle__set_isOn(__this_01,true,(MethodInfo *)0x0);
        pMVar4 = extraout_x1_02;
        if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pMVar4 = extraout_x1_03;
        }
        pSVar8 = (__this->fields)._tabButtonNames;
        if (((pSVar8 != (System_Collections_Generic_List_Text__o *)0x0) &&
            (pMVar5 = IGNCJNPCAEN_TypeInfo->static_fields->PDMKGCMHBJF,
            pMVar5 != (MIJPCDHFBPA_o *)0x0)) &&
           (pSVar6 = (pMVar5->fields)._HFKPAOAKEHD_k__BackingField,
           pSVar6 != (System_Collections_Generic_List_ANMHMMJOHJG__o *)0x0)) {
          pNVar7 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields;
          iVar1 = (pSVar8->fields)._size + pNVar7->CAHAKKCIBIB;
          if ((pSVar6->fields)._size <= iVar1) {
            iVar1 = 0;
          }
          if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
            pNVar7 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields;
            pMVar4 = extraout_x1_04;
          }
          pNVar7->CAHAKKCIBIB = iVar1;
          Nekki_SF2_GUI_DebugModules_ConsoleUI__KBBCEDMNICL(__this,pMVar4);
          Nekki_SF2_GUI_DebugModules_ConsoleUI__OnTabButtonSelect(__this,0,method_00);
          return;
        }
      }
    }
  }
LAB_0363d014:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnButtonClick(int DPJIDNBJIBG)  [RVA 0x353E934]
// Nekki.SF2.GUI.DebugModules.ConsoleUI$$OnButtonClick @ RVA 0x353E934

void Nekki_SF2_GUI_DebugModules_ConsoleUI__OnButtonClick
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,int32_t DPJIDNBJIBG,
               MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  System_String_array *pSVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MIJPCDHFBPA_o *pMVar4;
  ulong uVar5;
  System_Collections_Generic_List_ANMHMMJOHJG__o *pSVar6;
  ulong uVar7;
  
  if ((DAT_04568adf & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    FUN_01bab630(&IGNCJNPCAEN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ANMHMMJOHJG>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MFELPDAPJGO>_get_Item__);
    DAT_04568adf = 1;
  }
  pMVar4 = IGNCJNPCAEN_TypeInfo->static_fields->PDMKGCMHBJF;
  if (pMVar4 != (MIJPCDHFBPA_o *)0x0) {
    pSVar6 = (pMVar4->fields)._HFKPAOAKEHD_k__BackingField;
    if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pSVar6 != (System_Collections_Generic_List_ANMHMMJOHJG__o *)0x0) {
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar6,
                          Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->CAHAKKCIBIB
                          + Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->
                            BBGKBAMBOGA,
                          Method_System_Collections_Generic_List<ANMHMMJOHJG>_get_Item__);
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (pIVar2[1].monitor != (System_Collections_Generic_List_object__o *)0x0)) {
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           (pIVar2[1].monitor,DPJIDNBJIBG,
                            Method_System_Collections_Generic_List<MFELPDAPJGO>_get_Item__);
        if ((pIVar2 != (Il2CppObject *)0x0) && (pIVar2[1].monitor != (System_String_o *)0x0)) {
          method_01 = (MethodInfo *)0x0;
          pSVar3 = System_String__Split(pIVar2[1].monitor,0x3b,0,(MethodInfo *)0x0);
          if (pSVar3 != (System_String_array *)0x0) {
            if (0 < (int)pSVar3->max_length) {
              uVar7 = 0;
              uVar5 = pSVar3->max_length & 0xffffffff;
              do {
                if (uVar5 <= uVar7) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8d0();
                }
                Nekki_SF2_GUI_DebugModules_ConsoleUI__FIKOIBAMMEO
                          (__this,pSVar3->m_Items[uVar7],method_01);
                uVar1 = (uint)pSVar3->max_length;
                uVar5 = (ulong)uVar1;
                uVar7 = uVar7 + 1;
              } while ((long)uVar7 < (long)(int)uVar1);
            }
            pMVar4 = IGNCJNPCAEN_TypeInfo->static_fields->PDMKGCMHBJF;
            if (pMVar4 != (MIJPCDHFBPA_o *)0x0) {
              pSVar6 = (pMVar4->fields)._HFKPAOAKEHD_k__BackingField;
              if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
                    /* try { // try from 0363eac0 to 0373ec53 has its CatchHandler @ 0363eac0
                       catch() { ... } // from try @ 0363eac0 with catch @ 0363eac0
                       catch() { ... } // from try @ 0363eee4 with catch @ 0363eac0
                       catch() { ... } // from try @ 0363efa8 with catch @ 0363eac0
                       catch() { ... } // from try @ 0363efb0 with catch @ 0363eac0
                       catch() { ... } // from try @ 0363f0d8 with catch @ 0363eac0 */
              if ((((pSVar6 != (System_Collections_Generic_List_ANMHMMJOHJG__o *)0x0) &&
                   (pIVar2 = System_Collections_Generic_List<object>__get_Item
                                       ((System_Collections_Generic_List_object__o *)pSVar6,
                                        Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields
                                        ->CAHAKKCIBIB +
                                        Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields
                                        ->BBGKBAMBOGA,
                                        Method_System_Collections_Generic_List<ANMHMMJOHJG>_get_Item__
                                       ), pIVar2 != (Il2CppObject *)0x0)) &&
                  (pIVar2[1].monitor != (System_Collections_Generic_List_object__o *)0x0)) &&
                 (pIVar2 = System_Collections_Generic_List<object>__get_Item
                                     (pIVar2[1].monitor,DPJIDNBJIBG,
                                      Method_System_Collections_Generic_List<MFELPDAPJGO>_get_Item__
                                     ), pIVar2 != (Il2CppObject *)0x0)) {
                if (*(char *)&pIVar2[2].klass != '\0') {
                  Nekki_SF2_GUI_DebugModules_ConsoleUI__OnShowLogClick(__this,method_00);
                  return;
                }
                return;
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


// ===== public void .ctor()  [RVA 0x353EB14]
// Nekki.SF2.GUI.DebugModules.ConsoleUI$$.ctor @ RVA 0x353EB14

void Nekki_SF2_GUI_DebugModules_ConsoleUI___ctor
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,MethodInfo *method)

{
  (__this->fields).IABNCNEEGOE = -1;
  (__this->fields).GEPICMKIDJP = -1.0;
  (__this->fields).NDMOOFMHHKL = 1.7777778;
  (__this->fields).LOFKFMGMPJJ = -1.0;
  (__this->fields).OPAAJPDHLOM = -1.0;
  Nekki_SF2_GUI_DebugUIModule___ctor((Nekki_SF2_GUI_DebugUIModule_o *)__this,(MethodInfo *)0x0);
  return;
}

