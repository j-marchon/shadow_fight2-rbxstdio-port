// TypeDefIndex 3256
// Namespace: 
// public class FEKEAPCCOOB
// Fields:
//   private JEFOMACMAAD FIPOAPJHEPL; // 0x10
//   private int GEKOMLGOJOP; // 0x18
//   private List<KeyValuePair<Button, TabView>> IJLEELMHJNN; // 0x20
//   private Dictionary<int, string> DPOMIJALCDD; // 0x28

// ===== public TabView KJDNLILMFFF()  [RVA 0x35137E8]
// FEKEAPCCOOB$$KJDNLILMFFF @ RVA 0x35137E8

TabView_o * FEKEAPCCOOB__KJDNLILMFFF(FEKEAPCCOOB_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  TabView_o *pTVar3;
  MethodInfo *in_x2;
  
  iVar2 = (__this->fields).GEKOMLGOJOP;
  iVar1 = -1;
  if (iVar2 < 1) {
    iVar1 = 1;
  }
  pTVar3 = FEKEAPCCOOB__AAOLKEFFIIN(__this,iVar2 + iVar1,in_x2);
  return pTVar3;
}


// ===== public int GDCPIEANEJF(Button DJIMJLMCAPI, TabView FNCBJFJMIPB)  [RVA 0x351384C]
// FEKEAPCCOOB$$GDCPIEANEJF @ RVA 0x351384C

int32_t FEKEAPCCOOB__GDCPIEANEJF
                  (FEKEAPCCOOB_o *__this,UnityEngine_UI_Button_o *DJIMJLMCAPI,TabView_o *FNCBJFJMIPB
                  ,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_Collections_Generic_KeyValuePair_object__object__o item;
  long lVar3;
  bool bVar4;
  int32_t iVar5;
  Il2CppObject *__this_00;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_01;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_UI_Image_o *DAHDMONMPFJ;
  MethodInfo *method_00;
  MethodInfo_2639E28 *in_x4;
  System_Collections_Generic_KeyValuePair_Button__TabView__array *pSVar6;
  System_Collections_Generic_List_KeyValuePair_Button__TabView___o *__this_03;
  UnityEngine_Events_UnityEvent_o *__this_04;
  Nekki_SF2_GUI_ResolutionButton_o *__this_05;
  System_Collections_Generic_KeyValuePair_object__object__o __this_06;
  Il2CppObject local_50;
  
  if ((DAT_0456890a & 1) == 0) {
    FUN_01bab630(&Method_FEKEAPCCOOB_JAHABDODOFO_CCFAJFLNMAJ__);
    FUN_01bab630(&FEKEAPCCOOB_JAHABDODOFO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<Button,_TabView>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<Button,_TabView>>_Add__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_ResolutionButton_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_0456890a = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(FEKEAPCCOOB_JAHABDODOFO_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Il2CppObject *)0x0) goto LAB_03613b3c;
  __this_00[1].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 1,__this);
  iVar5 = FEKEAPCCOOB__KPOBFGCNFAG(__this,method_00);
  *(int32_t *)&__this_00[1].monitor = iVar5;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)DJIMJLMCAPI,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar4) {
    if ((DJIMJLMCAPI == (UnityEngine_UI_Button_o *)0x0) ||
       (__this_01 = (DJIMJLMCAPI->fields).m_OnClick,
       __this_01 == (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) goto LAB_03613b3c;
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_01,(MethodInfo *)0x0);
    __this_04 = (UnityEngine_Events_UnityEvent_o *)(DJIMJLMCAPI->fields).m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_04 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_03613b3c;
    UnityEngine_Events_UnityEvent__AddListener(__this_04,call,(MethodInfo *)0x0);
    __this_02 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)DJIMJLMCAPI,(MethodInfo *)0x0);
    if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto LAB_03613b3c;
    UnityEngine_GameObject__SetActive(__this_02,true,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)FNCBJFJMIPB,(MethodInfo *)0x0);
    if (!bVar4) {
      DAHDMONMPFJ = UnityEngine_UI_Selectable__get_image
                              ((UnityEngine_UI_Selectable_o *)DJIMJLMCAPI,(MethodInfo *)0x0);
      LJLLAKHOFFF__IFBBIDIEBEL((UnityEngine_UI_Graphic_o *)DAHDMONMPFJ,0.3137255,(MethodInfo *)0x0);
      bVar1 = (Nekki_SF2_GUI_ResolutionButton_TypeInfo->_2).naturalAligment;
      __this_05 = (Nekki_SF2_GUI_ResolutionButton_o *)0x0;
      if ((bVar1 <= (DJIMJLMCAPI->klass->_2).naturalAligment) &&
         (__this_05 = (Nekki_SF2_GUI_ResolutionButton_o *)DJIMJLMCAPI,
         (DJIMJLMCAPI->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
         (Il2CppClass *)Nekki_SF2_GUI_ResolutionButton_TypeInfo)) {
        __this_05 = (Nekki_SF2_GUI_ResolutionButton_o *)0x0;
      }
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)__this_05,(MethodInfo *)0x0);
      if (bVar4) {
        if (__this_05 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_03613b3c;
        Nekki_SF2_GUI_ResolutionButton__SetAllSpritesAsNormal(__this_05,(MethodInfo *)0x0);
      }
    }
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)FNCBJFJMIPB,(MethodInfo *)0x0);
  if (bVar4) {
    if (FNCBJFJMIPB == (TabView_o *)0x0) goto LAB_03613b3c;
    (*(FNCBJFJMIPB->klass->vtable)._18_Hide.methodPtr)
              (FNCBJFJMIPB,(FNCBJFJMIPB->klass->vtable)._18_Hide.method);
  }
  __this_03 = (__this->fields).IJLEELMHJNN;
  local_50.klass = (Il2CppClass *)0x0;
  local_50.monitor = (TabView_o *)0x0;
  __this_06.fields.value = (Il2CppObject *)DJIMJLMCAPI;
  __this_06.fields.key = &local_50;
  System_Collections_Generic_KeyValuePair<object,_object>___ctor
            (__this_06,(Il2CppObject *)FNCBJFJMIPB,
             Method_System_Collections_Generic_KeyValuePair<Button,_TabView>__ctor__,in_x4);
  lVar3 = Method_System_Collections_Generic_List<KeyValuePair<Button,_TabView>>_Add__;
  if (__this_03 != (System_Collections_Generic_List_KeyValuePair_Button__TabView___o *)0x0) {
    item.fields.value = local_50.monitor;
    item.fields.key = (Il2CppObject *)local_50.klass;
    pSVar6 = (__this_03->fields)._items;
    (__this_03->fields)._version = (__this_03->fields)._version + 1;
    if (pSVar6 != (System_Collections_Generic_KeyValuePair_Button__TabView__array *)0x0) {
      uVar2 = (__this_03->fields)._size;
      if (uVar2 < (uint)pSVar6->max_length) {
        (__this_03->fields)._size = uVar2 + 1;
        pSVar6->m_Items[(int)uVar2].fields.key = (UnityEngine_UI_Button_o *)local_50.klass;
        pSVar6->m_Items[(int)uVar2].fields.value = local_50.monitor;
        thunk_FUN_01c20e04(pSVar6->m_Items + (int)uVar2,0);
      }
      else {
        System_Collections_Generic_List<KeyValuePair<object,_object>>__AddWithResize
                  ((System_Collections_Generic_List_T__o *)__this_03,item,
                   *(MethodInfo_266FF2C **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
      return *(int32_t *)&__this_00[1].monitor;
    }
  }
LAB_03613b3c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public TabView AAOLKEFFIIN(int DPJIDNBJIBG)  [RVA 0x3513800]
// FEKEAPCCOOB$$AAOLKEFFIIN @ RVA 0x3513800

TabView_o * FEKEAPCCOOB__AAOLKEFFIIN(FEKEAPCCOOB_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  int32_t iVar1;
  TabView_o *pTVar2;
  
  iVar1 = FEKEAPCCOOB__KPOBFGCNFAG(__this,(MethodInfo *)(ulong)(uint)DPJIDNBJIBG);
  if (DPJIDNBJIBG < iVar1) {
    FEKEAPCCOOB__KNPIBDBFFIA(__this,DPJIDNBJIBG,method);
    pTVar2 = FEKEAPCCOOB__IDLJKBJEEHF(__this,(__this->fields).GEKOMLGOJOP,method);
    return pTVar2;
  }
  return (TabView_o *)0x0;
}


// ===== public int KPOBFGCNFAG()  [RVA 0x3513B48]
// FEKEAPCCOOB$$KPOBFGCNFAG @ RVA 0x3513B48

int32_t FEKEAPCCOOB__KPOBFGCNFAG(FEKEAPCCOOB_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_KeyValuePair_Button__TabView___o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_0456890b & 1) == 0) {
    auVar2 = FUN_01bab630(&
                          Method_System_Collections_Generic_List<KeyValuePair<Button,_TabView>>_get_Count__
                         );
    DAT_0456890b = 1;
  }
  pSVar1 = (__this->fields).IJLEELMHJNN;
  if (pSVar1 != (System_Collections_Generic_List_KeyValuePair_Button__TabView___o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public TabView CKNDOOPOOEF()  [RVA 0x3513FE0]
// FEKEAPCCOOB$$CKNDOOPOOEF @ RVA 0x3513FE0

TabView_o * FEKEAPCCOOB__CKNDOOPOOEF(FEKEAPCCOOB_o *__this,MethodInfo *method)

{
  TabView_o *pTVar1;
  MethodInfo *in_x2;
  
  pTVar1 = FEKEAPCCOOB__IDLJKBJEEHF(__this,(__this->fields).GEKOMLGOJOP,in_x2);
  return pTVar1;
}


// ===== public void CBEKFENKCGJ(int DPJIDNBJIBG, bool BLOGOHKEPHI)  [RVA 0x3514078]
// FEKEAPCCOOB$$CBEKFENKCGJ @ RVA 0x3514078

void FEKEAPCCOOB__CBEKFENKCGJ
               (FEKEAPCCOOB_o *__this,int32_t DPJIDNBJIBG,bool BLOGOHKEPHI,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Button_o *LGHOMHOPNEP;
  MethodInfo *method_00;
  int32_t CJPDDDECBPD;
  
  method_00 = (MethodInfo *)(ulong)BLOGOHKEPHI;
  if ((DAT_0456890c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456890c = 1;
  }
  LGHOMHOPNEP = FEKEAPCCOOB__MJEMLECEAHI(__this,DPJIDNBJIBG,method_00);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)LGHOMHOPNEP,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    CJPDDDECBPD = 0;
    if (!BLOGOHKEPHI) {
      CJPDDDECBPD = 2;
    }
    LJLLAKHOFFF__JAEOMHIAHJB(LGHOMHOPNEP,CJPDDDECBPD,true,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public void GIENGNEGHPJ(JEFOMACMAAD LPACNPJPCDA)  [RVA 0x35141B4]
// FEKEAPCCOOB$$GIENGNEGHPJ @ RVA 0x35141B4

void FEKEAPCCOOB__GIENGNEGHPJ(FEKEAPCCOOB_o *__this,JEFOMACMAAD_o *LPACNPJPCDA,MethodInfo *method)

{
  (__this->fields).FIPOAPJHEPL = LPACNPJPCDA;
  thunk_FUN_01c20e04(&__this->fields);
  (__this->fields).GEKOMLGOJOP = -1;
  return;
}


// ===== public void KPEEOJBFOCH(int DPJIDNBJIBG, string EHNFGMGKCHO)  [RVA 0x35141D8]
// FEKEAPCCOOB$$KPEEOJBFOCH @ RVA 0x35141D8

void FEKEAPCCOOB__KPEEOJBFOCH
               (FEKEAPCCOOB_o *__this,int32_t DPJIDNBJIBG,System_String_o *EHNFGMGKCHO,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  
  if ((DAT_0456890d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_string>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_string>_set_Item__);
    DAT_0456890d = 1;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).DPOMIJALCDD;
  if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<int,_object>__ContainsKey
                      (pSVar2,DPJIDNBJIBG,
                       Method_System_Collections_Generic_Dictionary<int,_string>_ContainsKey__);
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).DPOMIJALCDD;
    if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      if (bVar1) {
        System_Collections_Generic_Dictionary<int,_object>__set_Item
                  (pSVar2,DPJIDNBJIBG,(Il2CppObject *)EHNFGMGKCHO,
                   Method_System_Collections_Generic_Dictionary<int,_string>_set_Item__);
        return;
      }
      System_Collections_Generic_Dictionary<int,_object>__Add
                (pSVar2,DPJIDNBJIBG,(Il2CppObject *)EHNFGMGKCHO,
                 Method_System_Collections_Generic_Dictionary<int,_string>_Add__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int OCIKJGPNHLF()  [RVA 0x35142A4]
// FEKEAPCCOOB$$OCIKJGPNHLF @ RVA 0x35142A4

int32_t FEKEAPCCOOB__OCIKJGPNHLF(FEKEAPCCOOB_o *__this,MethodInfo *method)

{
  return (__this->fields).GEKOMLGOJOP;
}


// ===== public TabView IDLJKBJEEHF(int DPJIDNBJIBG)  [RVA 0x3513FE8]
// FEKEAPCCOOB$$IDLJKBJEEHF @ RVA 0x3513FE8

TabView_o * FEKEAPCCOOB__IDLJKBJEEHF(FEKEAPCCOOB_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  System_Collections_Generic_List_KeyValuePair_Button__TabView___o *__this_00;
  System_Collections_Generic_KeyValuePair_object__object__o SVar1;
  
  if ((DAT_0456890e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<Button,_TabView>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<Button,_TabView>>_get_Count__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<Button,_TabView>>_get_Item__);
    DAT_0456890e = 1;
  }
  if (-1 < DPJIDNBJIBG) {
    __this_00 = (__this->fields).IJLEELMHJNN;
    if (__this_00 == (System_Collections_Generic_List_KeyValuePair_Button__TabView___o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (DPJIDNBJIBG < (__this_00->fields)._size) {
      SVar1 = System_Collections_Generic_List<KeyValuePair<object,_object>>__get_Item
                        ((System_Collections_Generic_List_T__o *)__this_00,DPJIDNBJIBG,
                         Method_System_Collections_Generic_List<KeyValuePair<Button,_TabView>>_get_Item__
                        );
      return (TabView_o *)SVar1.fields.value;
    }
  }
  return (TabView_o *)0x0;
}


// ===== public void .ctor()  [RVA 0x35142AC]
// FEKEAPCCOOB$$.ctor @ RVA 0x35142AC

void FEKEAPCCOOB___ctor(FEKEAPCCOOB_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_KeyValuePair_Button__TabView___o *__this_00;
  System_Collections_Generic_List_KeyValuePair_Button__TabView___o **ppSVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  System_Collections_Generic_Dictionary_int__string__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456890f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<int,_string>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<Button,_TabView>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KeyValuePair<Button,_TabView>>_TypeInfo);
    DAT_0456890f = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_KeyValuePair_Button__TabView___o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<KeyValuePair<Button,_TabView>>_TypeInfo
                                 ,method);
  System_Collections_Generic_List<KeyValuePair<object,_object>>___ctor
            ((System_Collections_Generic_List_T__o *)__this_00,
             Method_System_Collections_Generic_List<KeyValuePair<Button,_TabView>>__ctor__);
  ppSVar1 = &(__this->fields).IJLEELMHJNN;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_Dictionary_int__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<int,_string>_TypeInfo);
  System_Collections_Generic_Dictionary<int,_object>___ctor
            (__this_01,Method_System_Collections_Generic_Dictionary<int,_string>__ctor__);
  ppSVar2 = &(__this->fields).DPOMIJALCDD;
  *ppSVar2 = (System_Collections_Generic_Dictionary_int__string__o *)__this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public Button MJEMLECEAHI(int DPJIDNBJIBG)  [RVA 0x3514128]
// FEKEAPCCOOB$$MJEMLECEAHI @ RVA 0x3514128

UnityEngine_UI_Button_o *
FEKEAPCCOOB__MJEMLECEAHI(FEKEAPCCOOB_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  System_Collections_Generic_List_KeyValuePair_Button__TabView___o *__this_00;
  System_Collections_Generic_KeyValuePair_object__object__o SVar1;
  
  if ((DAT_04568910 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<Button,_TabView>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<Button,_TabView>>_get_Count__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<Button,_TabView>>_get_Item__);
    DAT_04568910 = 1;
  }
  if (-1 < DPJIDNBJIBG) {
    __this_00 = (__this->fields).IJLEELMHJNN;
    if (__this_00 == (System_Collections_Generic_List_KeyValuePair_Button__TabView___o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (DPJIDNBJIBG < (__this_00->fields)._size) {
      SVar1 = System_Collections_Generic_List<KeyValuePair<object,_object>>__get_Item
                        ((System_Collections_Generic_List_T__o *)__this_00,DPJIDNBJIBG,
                         Method_System_Collections_Generic_List<KeyValuePair<Button,_TabView>>_get_Item__
                        );
      return (UnityEngine_UI_Button_o *)SVar1.fields.key;
    }
  }
  return (UnityEngine_UI_Button_o *)0x0;
}


// ===== private void KNPIBDBFFIA(int CKMDPHJOKAF)  [RVA 0x3513B90]
// FEKEAPCCOOB$$KNPIBDBFFIA @ RVA 0x3513B90

void FEKEAPCCOOB__KNPIBDBFFIA(FEKEAPCCOOB_o *__this,int32_t CKMDPHJOKAF,MethodInfo *method)

{
  int DPJIDNBJIBG;
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  bool bVar6;
  UnityEngine_UI_Button_o *LGHOMHOPNEP;
  TabView_o *x;
  UnityEngine_UI_Button_o *LGHOMHOPNEP_00;
  TabView_o *exists;
  VirtualInvokeData *pVVar7;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  System_String_o *value;
  undefined8 *puVar8;
  undefined8 uVar9;
  System_Collections_Generic_List_KeyValuePair_Button__TabView___o *pSVar10;
  JEFOMACMAAD_c *pJVar11;
  void **ppvVar12;
  ulong uVar13;
  int32_t *piVar14;
  int32_t iVar15;
  JEFOMACMAAD_o *pJVar16;
  
  if ((DAT_04568911 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_string>_get_Item__);
    FUN_01bab630(&JEFOMACMAAD_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<Button,_TabView>>_get_Count__)
    ;
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_12791/*"TabView::OnTabPressed: wrong tab index"*/);
    DAT_04568911 = 1;
  }
  if (-1 < CKMDPHJOKAF) {
    pSVar10 = (__this->fields).IJLEELMHJNN;
    if (pSVar10 == (System_Collections_Generic_List_KeyValuePair_Button__TabView___o *)0x0) {
LAB_03613fdc:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((CKMDPHJOKAF <= (pSVar10->fields)._size) &&
       (DPJIDNBJIBG = (__this->fields).GEKOMLGOJOP, DPJIDNBJIBG != CKMDPHJOKAF)) {
      LGHOMHOPNEP = FEKEAPCCOOB__MJEMLECEAHI(__this,DPJIDNBJIBG,method);
      x = FEKEAPCCOOB__IDLJKBJEEHF(__this,(__this->fields).GEKOMLGOJOP,method);
      LGHOMHOPNEP_00 = FEKEAPCCOOB__MJEMLECEAHI(__this,CKMDPHJOKAF,method);
      exists = FEKEAPCCOOB__IDLJKBJEEHF(__this,CKMDPHJOKAF,method);
      pJVar16 = (__this->fields).FIPOAPJHEPL;
      if (pJVar16 != (JEFOMACMAAD_o *)0x0) {
        pJVar11 = pJVar16->klass;
        uVar1 = (__this->fields).GEKOMLGOJOP;
        uVar2._0_1_ = (pJVar11->_2).rank;
        uVar2._1_1_ = (pJVar11->_2).minimumAlignment;
        uVar13 = (ulong)uVar2;
        if (uVar13 != 0) {
          piVar14 = &((pJVar11->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                (Il2CppClass *)JEFOMACMAAD_TypeInfo) {
              pVVar7 = pJVar11->vtable + (*piVar14 + 1);
              goto LAB_03613d0c;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        pVVar7 = (VirtualInvokeData *)FUN_01b81914(pJVar16,JEFOMACMAAD_TypeInfo,1);
LAB_03613d0c:
        (*pVVar7->methodPtr)
                  (pJVar16,LGHOMHOPNEP,x,(ulong)uVar1,LGHOMHOPNEP_00,exists,(ulong)(uint)CKMDPHJOKAF
                   ,pVVar7->method);
      }
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar6 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
      if (bVar6) {
        uVar1 = (__this->fields).GEKOMLGOJOP;
        (__this->fields).GEKOMLGOJOP = CKMDPHJOKAF;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar6 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)LGHOMHOPNEP,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar6) {
          LJLLAKHOFFF__JAEOMHIAHJB(LGHOMHOPNEP,0,true,(MethodInfo *)0x0);
        }
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar6 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar6) {
          if (x == (TabView_o *)0x0) goto LAB_03613fdc;
          (*(x->klass->vtable)._18_Hide.methodPtr)(x,(x->klass->vtable)._18_Hide.method);
          pJVar16 = (__this->fields).FIPOAPJHEPL;
          if (pJVar16 != (JEFOMACMAAD_o *)0x0) {
            pJVar11 = pJVar16->klass;
            uVar3._0_1_ = (pJVar11->_2).rank;
            uVar3._1_1_ = (pJVar11->_2).minimumAlignment;
            uVar13 = (ulong)uVar3;
            if (uVar13 != 0) {
              piVar14 = &((pJVar11->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                    (Il2CppClass *)JEFOMACMAAD_TypeInfo) {
                  pVVar7 = pJVar11->vtable + (*piVar14 + 2);
                  goto LAB_03613eac;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            pVVar7 = (VirtualInvokeData *)FUN_01b81914(pJVar16,JEFOMACMAAD_TypeInfo,2);
LAB_03613eac:
            (*pVVar7->methodPtr)(pJVar16,(ulong)uVar1,pVVar7->method);
          }
        }
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar6 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)LGHOMHOPNEP_00,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar6) {
          LJLLAKHOFFF__JAEOMHIAHJB(LGHOMHOPNEP_00,3,true,(MethodInfo *)0x0);
        }
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar6 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)exists,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar6) {
          if (exists == (TabView_o *)0x0) goto LAB_03613fdc;
          (*(exists->klass->vtable)._17_Show.methodPtr)
                    (exists,(exists->klass->vtable)._17_Show.method);
        }
        pJVar16 = (__this->fields).FIPOAPJHEPL;
        if (pJVar16 == (JEFOMACMAAD_o *)0x0) {
          return;
        }
        pJVar11 = pJVar16->klass;
        iVar15 = (__this->fields).GEKOMLGOJOP;
        uVar5._0_1_ = (pJVar11->_2).rank;
        uVar5._1_1_ = (pJVar11->_2).minimumAlignment;
        uVar13 = (ulong)uVar5;
        if (uVar13 != 0) {
          piVar14 = &((pJVar11->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                (Il2CppClass *)JEFOMACMAAD_TypeInfo) {
              ppvVar12 = &(pJVar11->_1).image + (long)*piVar14 * 2;
LAB_03613fb4:
              puVar8 = ppvVar12 + 0x27;
              goto LAB_03613fb8;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        uVar9 = 0;
      }
      else {
        __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                    (__this->fields).DPOMIJALCDD;
        if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)
        goto LAB_03613fdc;
        value = (System_String_o *)
                System_Collections_Generic_Dictionary<int,_object>__get_Item
                          (__this_00,CKMDPHJOKAF,
                           Method_System_Collections_Generic_Dictionary<int,_string>_get_Item__);
        bVar6 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
        if (bVar6) {
          return;
        }
        pJVar16 = (__this->fields).FIPOAPJHEPL;
        if (pJVar16 == (JEFOMACMAAD_o *)0x0) {
          return;
        }
        pJVar11 = pJVar16->klass;
        iVar15 = (__this->fields).GEKOMLGOJOP;
        uVar4._0_1_ = (pJVar11->_2).rank;
        uVar4._1_1_ = (pJVar11->_2).minimumAlignment;
        uVar13 = (ulong)uVar4;
        if (uVar13 != 0) {
          piVar14 = &((pJVar11->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                (Il2CppClass *)JEFOMACMAAD_TypeInfo) {
              ppvVar12 = &(pJVar11->_1).image + (long)(*piVar14 + 3) * 2;
              goto LAB_03613fb4;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        uVar9 = 3;
      }
      puVar8 = (undefined8 *)FUN_01b81914(pJVar16,JEFOMACMAAD_TypeInfo,uVar9);
LAB_03613fb8:
                    /* WARNING: Could not recover jumptable at 0x03613fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar8)(pJVar16,iVar15,puVar8[1]);
      return;
    }
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_12791/*"TabView::OnTabPressed: wrong tab index"*/,(MethodInfo *)0x0);
  return;
}

