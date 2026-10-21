// TypeDefIndex 1196
// Namespace: Nekki.SF2.GUI.Profile
// public class KeyIcon : MonoBehaviour
// Fields:
//   private ResolutionImage _Icon; // 0x20

// ===== public static KeyIcon Instantiate(DMMJFKCBHEK EADCEBLKJEA, GameObject HMBLEHNKDIH, Transform JJHEGPBBMLG)  [RVA 0x3128A58]
// Nekki.SF2.GUI.Profile.KeyIcon$$Instantiate @ RVA 0x3128A58

Nekki_SF2_GUI_Profile_KeyIcon_o *
Nekki_SF2_GUI_Profile_KeyIcon__Instantiate
          (int32_t EADCEBLKJEA,UnityEngine_GameObject_o *HMBLEHNKDIH,
          UnityEngine_Transform_o *JJHEGPBBMLG,MethodInfo *method)

{
  MGNDHCBAPEN_string__float__o *pMVar1;
  Nekki_SF2_GUI_Profile_KeyIcon_o *pNVar2;
  System_Object_array *args;
  Il2CppObject *pIVar3;
  long lVar4;
  undefined8 uVar5;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  int32_t local_24;
  
  method_00 = (MethodInfo *)HMBLEHNKDIH;
  if ((DAT_04566673 & 1) == 0) {
    FUN_01bab630(&DMMJFKCBHEK_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_8251/*"KeyIcon.Instantiate - unknown type: {0}"*/);
    DAT_04566673 = 1;
    method_00 = extraout_x1;
  }
  pMVar1 = Nekki_SF2_GUI_Profile_KeyIcon__FGJJDAHEGPF(EADCEBLKJEA,method_00);
  if (pMVar1 != (MGNDHCBAPEN_string__float__o *)0x0) {
    pNVar2 = Nekki_SF2_GUI_Profile_KeyIcon__Instantiate
                       ((pMVar1->fields).PHPELPFMOII,(pMVar1->fields).DOKHHBGJICA,HMBLEHNKDIH,
                        JJHEGPBBMLG,method);
    return pNVar2;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
  local_24 = EADCEBLKJEA;
  pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(DMMJFKCBHEK_TypeInfo,&local_24);
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pIVar3 != (Il2CppObject *)0x0) &&
     (lVar4 = thunk_FUN_01bda71c(pIVar3,(((args->obj).klass)->_1).element_class), lVar4 == 0)) {
    uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar5,0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = pIVar3;
    thunk_FUN_01c20e04(args->m_Items,pIVar3);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogErrorFormat(StringLiteral_8251/*"KeyIcon.Instantiate - unknown type: {0}"*/,args,(MethodInfo *)0x0);
    return (Nekki_SF2_GUI_Profile_KeyIcon_o *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public void .ctor()  [RVA 0x3128D5C]
// Nekki.SF2.GUI.Profile.KeyIcon$$.ctor @ RVA 0x3128D5C

void Nekki_SF2_GUI_Profile_KeyIcon___ctor
               (Nekki_SF2_GUI_Profile_KeyIcon_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static MGNDHCBAPEN<string, float> FGJJDAHEGPF(DMMJFKCBHEK EADCEBLKJEA)  [RVA 0x3128BA4]
// Nekki.SF2.GUI.Profile.KeyIcon$$FGJJDAHEGPF @ RVA 0x3128BA4

MGNDHCBAPEN_string__float__o *
Nekki_SF2_GUI_Profile_KeyIcon__FGJJDAHEGPF(int32_t EADCEBLKJEA,MethodInfo *method)

{
  uint uVar1;
  MGNDHCBAPEN_string__float__o *__this;
  MethodInfo *extraout_x1;
  undefined8 *puVar2;
  float JGGJNLLANAE;
  
  if ((DAT_04566674 & 1) == 0) {
    FUN_01bab630(&Method_MGNDHCBAPEN<string,_float>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<string,_float>_TypeInfo);
    FUN_01bab630(&StringLiteral_4509/*"ComboButtons.icon_left"*/);
    FUN_01bab630(&StringLiteral_4508/*"ComboButtons.icon_kick"*/);
    FUN_01bab630(&StringLiteral_4511/*"ComboButtons.icon_punch"*/);
    DAT_04566674 = 1;
    method = extraout_x1;
  }
  uVar1 = EADCEBLKJEA - 1;
  if (uVar1 < 10) {
    puVar2 = (undefined8 *)(&PTR_StringLiteral_4509/*"ComboButtons.icon_left"*/_03fc63f8)[(int)uVar1];
    JGGJNLLANAE = *(float *)(&DAT_00e2942c + (long)(int)uVar1 * 4);
    __this = (MGNDHCBAPEN_string__float__o *)
             thunk_FUN_01bda818(MGNDHCBAPEN<string,_float>_TypeInfo,method);
    MGNDHCBAPEN<object,_float>___ctor
              ((MGNDHCBAPEN_T1__T2__o *)__this,(Il2CppObject *)*puVar2,JGGJNLLANAE,
               Method_MGNDHCBAPEN<string,_float>__ctor__);
  }
  else {
    __this = (MGNDHCBAPEN_string__float__o *)0x0;
  }
  return __this;
}


// ===== public void Refresh(string DMCFDIBHCPD, float HDLADBMEOCC)  [RVA 0x3128D64]
// Nekki.SF2.GUI.Profile.KeyIcon$$Refresh @ RVA 0x3128D64

void Nekki_SF2_GUI_Profile_KeyIcon__Refresh
               (Nekki_SF2_GUI_Profile_KeyIcon_o *__this,System_String_o *DMCFDIBHCPD,
               float HDLADBMEOCC,MethodInfo *method)

{
  undefined1 auVar1 [12];
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  UnityEngine_Transform_o *__this_00;
  
  pNVar2 = (__this->fields)._Icon;
  if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar2,DMCFDIBHCPD,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._Icon;
    if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_Transform_o *)0x0)) {
      auVar1._4_8_ = 0;
      auVar1._0_4_ = -HDLADBMEOCC;
      UnityEngine_Transform__set_localEulerAngles
                (__this_00,(UnityEngine_Vector3_o)(auVar1 << 0x40),(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static KeyIcon Instantiate(string DMCFDIBHCPD, float HDLADBMEOCC, GameObject HMBLEHNKDIH, Transform JJHEGPBBMLG)  [RVA 0x3128C70]
// Nekki.SF2.GUI.Profile.KeyIcon$$Instantiate @ RVA 0x3128C70

Nekki_SF2_GUI_Profile_KeyIcon_o *
Nekki_SF2_GUI_Profile_KeyIcon__Instantiate
          (System_String_o *DMCFDIBHCPD,float HDLADBMEOCC,UnityEngine_GameObject_o *HMBLEHNKDIH,
          UnityEngine_Transform_o *JJHEGPBBMLG,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  Nekki_SF2_GUI_Profile_KeyIcon_o *__this_01;
  MethodInfo *method_00;
  
  if ((DAT_04566675 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<KeyIcon>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566675 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)HMBLEHNKDIH,
                      Method_UnityEngine_Object_Instantiate<GameObject>__);
  if ((__this != (UnityEngine_GameObject_o *)0x0) &&
     (__this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    method_00 = (MethodInfo *)0x0;
    UnityEngine_Transform__SetParent(__this_00,JJHEGPBBMLG,false,(MethodInfo *)0x0);
    __this_01 = (Nekki_SF2_GUI_Profile_KeyIcon_o *)
                UnityEngine_GameObject__GetComponent<object>
                          (__this,Method_UnityEngine_GameObject_GetComponent<KeyIcon>__);
    if (__this_01 != (Nekki_SF2_GUI_Profile_KeyIcon_o *)0x0) {
      Nekki_SF2_GUI_Profile_KeyIcon__Refresh(__this_01,DMCFDIBHCPD,HDLADBMEOCC,method_00);
      return __this_01;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

