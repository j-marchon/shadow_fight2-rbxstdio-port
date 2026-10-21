// TypeDefIndex 2622
// Namespace: Nekki.SF2.GUI.Common
// public class TwoAxisControlHandler : UIModule
// Fields:
//   private List<CPABDNGPCHO> _Controls; // 0x28
//   private HHNIGLIDHLK _ControlPriority; // 0x30
//   private TwoAxisControlHandler.ControlAcceptedEvent _OnControlAccepted; // 0x38
//   private Vector2 MHEMJOAINGI; // 0x40
//   private bool FPIJAPOMEHL; // 0x48
//   private bool EMIDKCNCPLC; // 0x49

// ===== private void OnDisable()  [RVA 0x33B0C08]
// Nekki.SF2.GUI.Common.TwoAxisControlHandler$$OnDisable @ RVA 0x33B0C08

void Nekki_SF2_GUI_Common_TwoAxisControlHandler__OnDisable
               (Nekki_SF2_GUI_Common_TwoAxisControlHandler_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar1;
  System_Action_T0__T1__T2__T3__o *PKKMGBOIDJD;
  System_Action_T0__T1__T2__o *PKKMGBOIDJD_00;
  EECMMJDOPDJ_o *__this_00;
  CEAGEFMDAAN_o *__this_01;
  
                    /* try { // try from 034b0c0c to 035b0d37 has its CatchHandler @ 034afe4c */
  if ((DAT_04567d48 & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_JCLBGAAFKGE>_TypeInfo);
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_JCLBGAAFKGE,_float>_TypeInfo);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_JCLBGAAFKGE>_KMAMCKGFKLF__);
    FUN_01bab630(&Method_KAMIOIFKHJP<ADINBPPGIOA,_int,_JCLBGAAFKGE,_float>_KMAMCKGFKLF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_TwoAxisControlHandler_BEBGOPNMHON__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_TwoAxisControlHandler_GKHAKLDEIJI__);
    DAT_04567d48 = 1;
  }
  pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
  if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
    __this_00 = (pNVar1->fields).ALALIGAEHDK;
    PKKMGBOIDJD = (System_Action_T0__T1__T2__T3__o *)
                  thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_JCLBGAAFKGE,_float>_TypeInfo);
    System_Action<Int32Enum,_int,_Int32Enum,_float>___ctor();
    if (__this_00 != (EECMMJDOPDJ_o *)0x0) {
      KAMIOIFKHJP<Int32Enum,_int,_Int32Enum,_float>__KMAMCKGFKLF
                ((KAMIOIFKHJP_T0__T1__T2__T3__o *)__this_00,PKKMGBOIDJD,
                 Method_KAMIOIFKHJP<ADINBPPGIOA,_int,_JCLBGAAFKGE,_float>_KMAMCKGFKLF__);
      pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
      if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
        __this_01 = (pNVar1->fields).MODIIOJEMLE;
        PKKMGBOIDJD_00 =
             (System_Action_T0__T1__T2__o *)
             thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_JCLBGAAFKGE>_TypeInfo);
        System_Action<Int32Enum,_int,_Int32Enum>___ctor();
        if (__this_01 != (CEAGEFMDAAN_o *)0x0) {
          FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__KMAMCKGFKLF
                    ((FMKGOOONJKB_T0__T1__T2__o *)__this_01,PKKMGBOIDJD_00,
                     Method_FMKGOOONJKB<ADINBPPGIOA,_int,_JCLBGAAFKGE>_KMAMCKGFKLF__);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public HHNIGLIDHLK get_ControlPriority()  [RVA 0x33B0D2C]
// Nekki.SF2.GUI.Common.TwoAxisControlHandler$$get_ControlPriority @ RVA 0x33B0D2C

int32_t Nekki_SF2_GUI_Common_TwoAxisControlHandler__get_ControlPriority
                  (Nekki_SF2_GUI_Common_TwoAxisControlHandler_o *__this,MethodInfo *method)

{
  return (__this->fields)._ControlPriority;
}


// ===== private bool JKGFHBLOFKM(JCLBGAAFKGE AAJGEHHPMGH)  [RVA 0x33B0D34]
// Nekki.SF2.GUI.Common.TwoAxisControlHandler$$JKGFHBLOFKM @ RVA 0x33B0D34

bool Nekki_SF2_GUI_Common_TwoAxisControlHandler__JKGFHBLOFKM
               (Nekki_SF2_GUI_Common_TwoAxisControlHandler_o *__this,int32_t AAJGEHHPMGH,
               MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_Collections_Generic_List_T__o *__this_00;
  int32_t item;
  
                    /* try { // try from 034b0d38 to 035b0d5f has its CatchHandler @ 034b1f18 */
  if ((DAT_04567d49 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<CPABDNGPCHO>_Contains__);
    DAT_04567d49 = 1;
  }
  if (5 < (uint)AAJGEHHPMGH) {
    return false;
  }
  uVar1 = 1 << (ulong)(AAJGEHHPMGH & 0x1f);
  if ((uVar1 & 3) == 0) {
    if ((uVar1 & 0xc) == 0) {
      __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields)._Controls;
      if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) goto LAB_034b0dd8;
      item = 2;
    }
    else {
      __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields)._Controls;
      if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) {
LAB_034b0dd8:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      item = 1;
    }
  }
  else {
                    /* try { // try from 034b0d94 to 035b0dbf has its CatchHandler @ 034b1e54 */
    __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields)._Controls;
    if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) goto LAB_034b0dd8;
    item = 0;
  }
  bVar2 = System_Collections_Generic_List<Int32Enum>__Contains
                    (__this_00,item,Method_System_Collections_Generic_List<CPABDNGPCHO>_Contains__);
  return bVar2;
}


// ===== private void DAGDLFPMAIA()  [RVA 0x33B0DDC]
// Nekki.SF2.GUI.Common.TwoAxisControlHandler$$DAGDLFPMAIA @ RVA 0x33B0DDC

void Nekki_SF2_GUI_Common_TwoAxisControlHandler__DAGDLFPMAIA
               (Nekki_SF2_GUI_Common_TwoAxisControlHandler_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar2;
  System_Action_T0__T1__T2__T3__o *PKKMGBOIDJD;
  System_Enum_o *pSVar3;
  System_Action_T0__T1__T2__o *PKKMGBOIDJD_00;
  EECMMJDOPDJ_o *__this_01;
  CEAGEFMDAAN_o *__this_02;
  int32_t local_28;
  int32_t local_24;
  
                    /* try { // try from 034b0df4 to 035b0dff has its CatchHandler @ 034b1d54 */
  if ((DAT_04567d4a & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_JCLBGAAFKGE>_TypeInfo);
                    /* try { // try from 034b0e08 to 035b0e17 has its CatchHandler @ 034b1d58 */
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_JCLBGAAFKGE,_float>_TypeInfo);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_JCLBGAAFKGE>_BNBFMIDBJNC__);
    FUN_01bab630(&HHNIGLIDHLK_TypeInfo);
                    /* try { // try from 034b0e28 to 035b0e2f has its CatchHandler @ 034b1b44 */
    FUN_01bab630(&Method_KAMIOIFKHJP<ADINBPPGIOA,_int,_JCLBGAAFKGE,_float>_BNBFMIDBJNC__);
                    /* try { // try from 034b0e38 to 035b0e3f has its CatchHandler @ 034b1b48 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_TwoAxisControlHandler_BEBGOPNMHON__);
                    /* try { // try from 034b0e40 to 035b0e5f has its CatchHandler @ 034b1d50 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_TwoAxisControlHandler_GKHAKLDEIJI__);
    DAT_04567d4a = 1;
  }
  bVar1 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
                    /* try { // try from 034b0e6c to 035b0e73 has its CatchHandler @ 034b1b20 */
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 034b0e7c to 035b0e83 has its CatchHandler @ 034b1b38 */
    if (!bVar1) {
      return;
    }
                    /* try { // try from 034b0e84 to 035b0e8f has its CatchHandler @ 034b1b24 */
    pNVar2 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
    if (pNVar2 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
      __this_01 = (pNVar2->fields).ALALIGAEHDK;
      PKKMGBOIDJD = (System_Action_T0__T1__T2__T3__o *)
                    thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_JCLBGAAFKGE,_float>_TypeInfo)
      ;
                    /* try { // try from 034b0ea4 to 035b0eab has its CatchHandler @ 034b1b28 */
                    /* try { // try from 034b0eac to 035b0ff3 has its CatchHandler @ 034afe4c */
      System_Action<Int32Enum,_int,_Int32Enum,_float>___ctor();
      local_24 = (__this->fields)._ControlPriority;
      pSVar3 = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_24);
      if (__this_01 != (EECMMJDOPDJ_o *)0x0) {
        KAMIOIFKHJP<Int32Enum,_int,_Int32Enum,_float>__BNBFMIDBJNC
                  ((KAMIOIFKHJP_T0__T1__T2__T3__o *)__this_01,PKKMGBOIDJD,pSVar3,
                   Method_KAMIOIFKHJP<ADINBPPGIOA,_int,_JCLBGAAFKGE,_float>_BNBFMIDBJNC__);
        pNVar2 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
        if (pNVar2 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
          __this_02 = (pNVar2->fields).MODIIOJEMLE;
          PKKMGBOIDJD_00 =
               (System_Action_T0__T1__T2__o *)
               thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_JCLBGAAFKGE>_TypeInfo);
          System_Action<Int32Enum,_int,_Int32Enum>___ctor();
          local_28 = (__this->fields)._ControlPriority;
          pSVar3 = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_28);
          if (__this_02 != (CEAGEFMDAAN_o *)0x0) {
            FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__BNBFMIDBJNC
                      ((FMKGOOONJKB_T0__T1__T2__o *)__this_02,PKKMGBOIDJD_00,pSVar3,
                       Method_FMKGOOONJKB<ADINBPPGIOA,_int,_JCLBGAAFKGE>_BNBFMIDBJNC__);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OnEnable()  [RVA 0x33B0F7C]
// Nekki.SF2.GUI.Common.TwoAxisControlHandler$$OnEnable @ RVA 0x33B0F7C

void Nekki_SF2_GUI_Common_TwoAxisControlHandler__OnEnable
               (Nekki_SF2_GUI_Common_TwoAxisControlHandler_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  UnityEngine_Vector2_Fields UVar1;
  
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
    method = extraout_x1;
  }
  UVar1 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
  (__this->fields).FPIJAPOMEHL = false;
  (__this->fields).EMIDKCNCPLC = false;
  (__this->fields).MHEMJOAINGI.fields = UVar1;
  Nekki_SF2_GUI_Common_TwoAxisControlHandler__FIAHBLBGOEP(__this,method);
  return;
}


// ===== private void BEBGOPNMHON(ADINBPPGIOA NAIJBCMHBFK, int OPHMGAKOJLP, JCLBGAAFKGE AAJGEHHPMGH, float GKNIEGGEIFD)  [RVA 0x33B122C]
// Nekki.SF2.GUI.Common.TwoAxisControlHandler$$BEBGOPNMHON @ RVA 0x33B122C

void Nekki_SF2_GUI_Common_TwoAxisControlHandler__BEBGOPNMHON
               (Nekki_SF2_GUI_Common_TwoAxisControlHandler_o *__this,int32_t NAIJBCMHBFK,
               int32_t OPHMGAKOJLP,int32_t AAJGEHHPMGH,float GKNIEGGEIFD,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Vector2_o *pUVar3;
  
  bVar1 = Nekki_SF2_GUI_Common_TwoAxisControlHandler__JKGFHBLOFKM
                    (__this,AAJGEHHPMGH,(MethodInfo *)(ulong)(uint)OPHMGAKOJLP);
  if ((bVar1) &&
     (bVar1 = UnityEngine_Behaviour__get_enabled
                        ((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0), bVar1)) {
    pUVar2 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      bVar1 = AKJJAPEHKCG__MNKFDLHJPAA(pUVar2,(MethodInfo *)0x0);
                    /* try { // try from 034b1290 to 035b12b7 has its CatchHandler @ 034b1c80 */
      if (!bVar1) {
        if ((uint)AAJGEHHPMGH < 6) {
          if ((1 << (ulong)(AAJGEHHPMGH & 0x1f) & 0x15U) == 0) {
            pUVar3 = (UnityEngine_Vector2_o *)&(__this->fields).MHEMJOAINGI.fields.y;
          }
          else {
            pUVar3 = &(__this->fields).MHEMJOAINGI;
          }
          (pUVar3->fields).x = GKNIEGGEIFD;
        }
        if ((__this->fields).FPIJAPOMEHL == false) {
          (__this->fields).FPIJAPOMEHL = true;
        }
      }
    }
  }
  return;
}


// ===== public void set_ControlPriority(HHNIGLIDHLK CJNHFNHJHPE)  [RVA 0x33B132C]
// Nekki.SF2.GUI.Common.TwoAxisControlHandler$$set_ControlPriority @ RVA 0x33B132C

void Nekki_SF2_GUI_Common_TwoAxisControlHandler__set_ControlPriority
               (Nekki_SF2_GUI_Common_TwoAxisControlHandler_o *__this,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
  if ((__this->fields)._ControlPriority == CJNHFNHJHPE) {
    return;
  }
  (__this->fields)._ControlPriority = CJNHFNHJHPE;
  Nekki_SF2_GUI_Common_TwoAxisControlHandler__DAGDLFPMAIA
            (__this,(MethodInfo *)(ulong)(uint)CJNHFNHJHPE);
  return;
}


// ===== public List<CPABDNGPCHO> get_Controls()  [RVA 0x33B1344]
// Nekki.SF2.GUI.Common.TwoAxisControlHandler$$get_Controls @ RVA 0x33B1344

System_Collections_Generic_List_CPABDNGPCHO__o *
Nekki_SF2_GUI_Common_TwoAxisControlHandler__get_Controls
          (Nekki_SF2_GUI_Common_TwoAxisControlHandler_o *__this,MethodInfo *method)

{
  return (__this->fields)._Controls;
}


// ===== private void LateUpdate()  [RVA 0x33B134C]
// Nekki.SF2.GUI.Common.TwoAxisControlHandler$$LateUpdate @ RVA 0x33B134C

void Nekki_SF2_GUI_Common_TwoAxisControlHandler__LateUpdate
               (Nekki_SF2_GUI_Common_TwoAxisControlHandler_o *__this,MethodInfo *method)

{
  System_Object_array *args;
  Il2CppObject *pIVar1;
  long lVar2;
  UnityEngine_Events_UnityEvent_Vector2__o *__this_00;
  undefined8 uVar3;
  System_Collections_Generic_List_CPABDNGPCHO__o *pSVar4;
  float local_28;
  float local_24;
  
                    /* try { // try from 034b134c to 035b1357 has its CatchHandler @ 034b1ad8 */
  if ((DAT_04567d4b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 034b1378 to 035b137f has its CatchHandler @ 034b1a94 */
    FUN_01bab630(&Method_System_Collections_Generic_List<CPABDNGPCHO>_get_Count__);
                    /* try { // try from 034b1388 to 035b138f has its CatchHandler @ 034b1a9c */
    FUN_01bab630(&object___TypeInfo);
                    /* try { // try from 034b1390 to 035b139b has its CatchHandler @ 034b1a98 */
    FUN_01bab630(&float_TypeInfo);
                    /* try { // try from 034b139c to 035b13ff has its CatchHandler @ 034b1ad0 */
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<Vector2>_Invoke__);
    FUN_01bab630(&StringLiteral_12412/*"Stick: {0}|{1}"*/);
    DAT_04567d4b = 1;
  }
  pSVar4 = (__this->fields)._Controls;
  if (pSVar4 != (System_Collections_Generic_List_CPABDNGPCHO__o *)0x0) {
    if ((((pSVar4->fields)._size == 0) || ((__this->fields).FPIJAPOMEHL == false)) ||
       ((__this->fields).EMIDKCNCPLC != false)) {
      return;
    }
    (__this->fields).EMIDKCNCPLC = true;
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
    local_24 = (__this->fields).MHEMJOAINGI.fields.x;
    pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_24);
    if (args != (System_Object_array *)0x0) {
                    /* try { // try from 034b1418 to 035b141f has its CatchHandler @ 034b1a74 */
                    /* try { // try from 034b1428 to 035b142f has its CatchHandler @ 034b1a78 */
                    /* try { // try from 034b1430 to 035b143b has its CatchHandler @ 034b1a7c */
      if ((pIVar1 != (Il2CppObject *)0x0) &&
         (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0)) {
LAB_034b14fc:
        uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar3,0);
      }
      if ((int)args->max_length != 0) {
                    /* try { // try from 034b143c to 035b149f has its CatchHandler @ 034b1ac8 */
        args->m_Items[0] = pIVar1;
        thunk_FUN_01c20e04(args->m_Items,pIVar1);
        local_28 = (__this->fields).MHEMJOAINGI.fields.y;
        pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_28);
        if ((pIVar1 != (Il2CppObject *)0x0) &&
           (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0))
        goto LAB_034b14fc;
        if (1 < (uint)args->max_length) {
          args->m_Items[1] = pIVar1;
          thunk_FUN_01c20e04(args->m_Items + 1,pIVar1);
                    /* try { // try from 034b14a0 to 035b15db has its CatchHandler @ 034afe4c */
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogFormat(StringLiteral_12412/*"Stick: {0}|{1}"*/,args,(MethodInfo *)0x0);
          __this_00 = (UnityEngine_Events_UnityEvent_Vector2__o *)
                      (__this->fields)._OnControlAccepted;
          if (__this_00 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
            UnityEngine_Events_UnityEvent<Vector2>__Invoke
                      (__this_00,(UnityEngine_Vector2_o)(__this->fields).MHEMJOAINGI.fields,
                       Method_UnityEngine_Events_UnityEvent<Vector2>_Invoke__);
            return;
          }
          goto LAB_034b14f4;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
LAB_034b14f4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FIAHBLBGOEP()  [RVA 0x33B0FD4]
// Nekki.SF2.GUI.Common.TwoAxisControlHandler$$FIAHBLBGOEP @ RVA 0x33B0FD4

void Nekki_SF2_GUI_Common_TwoAxisControlHandler__FIAHBLBGOEP
               (Nekki_SF2_GUI_Common_TwoAxisControlHandler_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar2;
  System_Action_T0__T1__T2__T3__o *pSVar3;
  System_Action_T0__T1__T2__o *pSVar4;
  UnityEngine_GameObject_o *__this_00;
  System_Enum_o *pSVar5;
  EECMMJDOPDJ_o *pEVar6;
  CEAGEFMDAAN_o *pCVar7;
  int32_t local_48;
  int32_t local_44;
  
                    /* try { // try from 034b0ff4 to 035b101b has its CatchHandler @ 034b1d68 */
  if ((DAT_04567d4c & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_JCLBGAAFKGE>_TypeInfo);
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_JCLBGAAFKGE,_float>_TypeInfo);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_JCLBGAAFKGE>_KMAMCKGFKLF__);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_JCLBGAAFKGE>_MDDFPBJBKPM__);
    FUN_01bab630(&HHNIGLIDHLK_TypeInfo);
    FUN_01bab630(&Method_KAMIOIFKHJP<ADINBPPGIOA,_int,_JCLBGAAFKGE,_float>_KMAMCKGFKLF__);
    FUN_01bab630(&Method_KAMIOIFKHJP<ADINBPPGIOA,_int,_JCLBGAAFKGE,_float>_MDDFPBJBKPM__);
                    /* try { // try from 034b1050 to 035b107b has its CatchHandler @ 034b1d64 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_TwoAxisControlHandler_BEBGOPNMHON__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_TwoAxisControlHandler_GKHAKLDEIJI__);
    DAT_04567d4c = 1;
  }
  pNVar2 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
    pEVar6 = (pNVar2->fields).ALALIGAEHDK;
    pSVar3 = (System_Action_T0__T1__T2__T3__o *)
             thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_JCLBGAAFKGE,_float>_TypeInfo);
    System_Action<Int32Enum,_int,_Int32Enum,_float>___ctor();
    if (pEVar6 != (EECMMJDOPDJ_o *)0x0) {
                    /* try { // try from 034b10b0 to 035b10bb has its CatchHandler @ 034b1c34 */
      KAMIOIFKHJP<Int32Enum,_int,_Int32Enum,_float>__KMAMCKGFKLF
                ((KAMIOIFKHJP_T0__T1__T2__T3__o *)pEVar6,pSVar3,
                 Method_KAMIOIFKHJP<ADINBPPGIOA,_int,_JCLBGAAFKGE,_float>_KMAMCKGFKLF__);
      pNVar2 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
      if (pNVar2 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
        pCVar7 = (pNVar2->fields).MODIIOJEMLE;
                    /* try { // try from 034b10dc to 035b10e3 has its CatchHandler @ 034b1ac0 */
        pSVar4 = (System_Action_T0__T1__T2__o *)
                 thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_JCLBGAAFKGE>_TypeInfo);
                    /* try { // try from 034b10ec to 035b10f3 has its CatchHandler @ 034b1ab4 */
                    /* try { // try from 034b10f4 to 035b10ff has its CatchHandler @ 034b1abc */
        System_Action<Int32Enum,_int,_Int32Enum>___ctor();
                    /* try { // try from 034b1100 to 035b1163 has its CatchHandler @ 034b1c3c */
        if (pCVar7 != (CEAGEFMDAAN_o *)0x0) {
          FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__KMAMCKGFKLF
                    ((FMKGOOONJKB_T0__T1__T2__o *)pCVar7,pSVar4,
                     Method_FMKGOOONJKB<ADINBPPGIOA,_int,_JCLBGAAFKGE>_KMAMCKGFKLF__);
          bVar1 = UnityEngine_Behaviour__get_enabled
                            ((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
          if (!bVar1) {
            return;
          }
          __this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
            bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
            if (!bVar1) {
              return;
            }
            pNVar2 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
            if (pNVar2 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
              pEVar6 = (pNVar2->fields).ALALIGAEHDK;
              pSVar3 = (System_Action_T0__T1__T2__T3__o *)
                       thunk_FUN_01bda818(
                                         System_Action<ADINBPPGIOA,_int,_JCLBGAAFKGE,_float>_TypeInfo
                                         );
                    /* try { // try from 034b1164 to 035b128f has its CatchHandler @ 034afe4c */
              System_Action<Int32Enum,_int,_Int32Enum,_float>___ctor();
              local_44 = (__this->fields)._ControlPriority;
              pSVar5 = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_44);
              if (pEVar6 != (EECMMJDOPDJ_o *)0x0) {
                KAMIOIFKHJP<Int32Enum,_int,_Int32Enum,_float>__MDDFPBJBKPM
                          ((KAMIOIFKHJP_T0__T1__T2__T3__o *)pEVar6,pSVar3,pSVar5,
                           Method_KAMIOIFKHJP<ADINBPPGIOA,_int,_JCLBGAAFKGE,_float>_MDDFPBJBKPM__);
                pNVar2 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
                if (pNVar2 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
                  pCVar7 = (pNVar2->fields).MODIIOJEMLE;
                  pSVar4 = (System_Action_T0__T1__T2__o *)
                           thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_JCLBGAAFKGE>_TypeInfo)
                  ;
                  System_Action<Int32Enum,_int,_Int32Enum>___ctor();
                  local_48 = (__this->fields)._ControlPriority;
                  pSVar5 = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_48);
                  if (pCVar7 != (CEAGEFMDAAN_o *)0x0) {
                    FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__MDDFPBJBKPM
                              ((FMKGOOONJKB_T0__T1__T2__o *)pCVar7,pSVar4,pSVar5,
                               Method_FMKGOOONJKB<ADINBPPGIOA,_int,_JCLBGAAFKGE>_MDDFPBJBKPM__);
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


// ===== private void GKHAKLDEIJI(ADINBPPGIOA NAIJBCMHBFK, int OPHMGAKOJLP, JCLBGAAFKGE AAJGEHHPMGH)  [RVA 0x33B1508]
// Nekki.SF2.GUI.Common.TwoAxisControlHandler$$GKHAKLDEIJI @ RVA 0x33B1508

void Nekki_SF2_GUI_Common_TwoAxisControlHandler__GKHAKLDEIJI
               (Nekki_SF2_GUI_Common_TwoAxisControlHandler_o *__this,int32_t NAIJBCMHBFK,
               int32_t OPHMGAKOJLP,int32_t AAJGEHHPMGH,MethodInfo *method)

{
  bool_conflict bVar1;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  
  bVar2 = Nekki_SF2_GUI_Common_TwoAxisControlHandler__JKGFHBLOFKM
                    (__this,AAJGEHHPMGH,(MethodInfo *)(ulong)(uint)OPHMGAKOJLP);
  if ((bVar2) &&
     (bVar2 = UnityEngine_Behaviour__get_enabled
                        ((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0), bVar2)) {
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      bVar2 = AKJJAPEHKCG__MNKFDLHJPAA(pUVar3,(MethodInfo *)0x0);
      if ((!bVar2) &&
         (bVar1 = (__this->fields).FPIJAPOMEHL,
         (__this->fields).MHEMJOAINGI.fields = (UnityEngine_Vector2_Fields)0x0, bVar1 != false)) {
        (__this->fields).FPIJAPOMEHL = false;
        (__this->fields).EMIDKCNCPLC = false;
      }
    }
  }
  return;
}


// ===== public void .ctor()  [RVA 0x33B158C]
// Nekki.SF2.GUI.Common.TwoAxisControlHandler$$.ctor @ RVA 0x33B158C

void Nekki_SF2_GUI_Common_TwoAxisControlHandler___ctor
               (Nekki_SF2_GUI_Common_TwoAxisControlHandler_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_T__o *__this_00;
  System_Collections_Generic_List_CPABDNGPCHO__o **ppSVar1;
  Nekki_SF2_GUI_Common_TwoAxisControlHandler_ControlAcceptedEvent_o *__this_01;
  Nekki_SF2_GUI_Common_TwoAxisControlHandler_ControlAcceptedEvent_o **ppNVar2;
  MethodInfo *extraout_x1;
  undefined1 auVar3 [16];
  
  if ((DAT_04567d4d & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Common_TwoAxisControlHandler_ControlAcceptedEvent_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CPABDNGPCHO>__ctor__);
                    /* try { // try from 034b15dc to 035b1603 has its CatchHandler @ 034b1b7c */
    FUN_01bab630(&System_Collections_Generic_List<CPABDNGPCHO>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04567d4d = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_T__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<CPABDNGPCHO>_TypeInfo,method);
  System_Collections_Generic_List<Int32Enum>___ctor
            (__this_00,Method_System_Collections_Generic_List<CPABDNGPCHO>__ctor__);
  ppSVar1 = &(__this->fields)._Controls;
  *ppSVar1 = (System_Collections_Generic_List_CPABDNGPCHO__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  auVar3 = thunk_FUN_01bda818(
                             Nekki_SF2_GUI_Common_TwoAxisControlHandler_ControlAcceptedEvent_TypeInfo
                             );
  __this_01 = auVar3._0_8_;
  Nekki_SF2_GUI_Common_TwoAxisControlHandler_ControlAcceptedEvent___ctor(__this_01,auVar3._8_8_);
  ppNVar2 = &(__this->fields)._OnControlAccepted;
                    /* try { // try from 034b1638 to 035b1663 has its CatchHandler @ 034b1adc */
  *ppNVar2 = __this_01;
  thunk_FUN_01c20e04(ppNVar2,__this_01);
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
  }
  (__this->fields).MHEMJOAINGI.fields =
       (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 034b1698 to 035b16a3 has its CatchHandler @ 034b1aa8 */
  Nekki_SF2_GUI_UIModule___ctor((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void DHJKPCFLJHA(JCLBGAAFKGE AAJGEHHPMGH, float GKNIEGGEIFD)  [RVA 0x33B12E4]
// Nekki.SF2.GUI.Common.TwoAxisControlHandler$$DHJKPCFLJHA @ RVA 0x33B12E4

void Nekki_SF2_GUI_Common_TwoAxisControlHandler__DHJKPCFLJHA
               (Nekki_SF2_GUI_Common_TwoAxisControlHandler_o *__this,int32_t AAJGEHHPMGH,
               float GKNIEGGEIFD,MethodInfo *method)

{
  UnityEngine_Vector2_o *pUVar1;
  
  if ((uint)AAJGEHHPMGH < 6) {
                    /* try { // try from 034b12ec to 035b1317 has its CatchHandler @ 034b1c40 */
    if ((1 << (ulong)(AAJGEHHPMGH & 0x1f) & 0x15U) == 0) {
      pUVar1 = (UnityEngine_Vector2_o *)&(__this->fields).MHEMJOAINGI.fields.y;
    }
    else {
      pUVar1 = &(__this->fields).MHEMJOAINGI;
    }
    (pUVar1->fields).x = GKNIEGGEIFD;
  }
  return;
}


// ===== private void HKBBNMKMEBH()  [RVA 0x33B157C]
// Nekki.SF2.GUI.Common.TwoAxisControlHandler$$HKBBNMKMEBH @ RVA 0x33B157C

void Nekki_SF2_GUI_Common_TwoAxisControlHandler__HKBBNMKMEBH
               (Nekki_SF2_GUI_Common_TwoAxisControlHandler_o *__this,MethodInfo *method)

{
  if ((__this->fields).FPIJAPOMEHL != false) {
    (__this->fields).FPIJAPOMEHL = false;
    (__this->fields).EMIDKCNCPLC = false;
  }
  return;
}


// ===== private void DBHLOBCIOBE()  [RVA 0x33B1314]
// Nekki.SF2.GUI.Common.TwoAxisControlHandler$$DBHLOBCIOBE @ RVA 0x33B1314

void Nekki_SF2_GUI_Common_TwoAxisControlHandler__DBHLOBCIOBE
               (Nekki_SF2_GUI_Common_TwoAxisControlHandler_o *__this,MethodInfo *method)

{
  if ((__this->fields).FPIJAPOMEHL != false) {
    return;
  }
  (__this->fields).FPIJAPOMEHL = true;
  return;
}


// ===== public TwoAxisControlHandler.ControlAcceptedEvent get_OnControlAccepted()  [RVA 0x33B16EC]
// Nekki.SF2.GUI.Common.TwoAxisControlHandler$$get_OnControlAccepted @ RVA 0x33B16EC

Nekki_SF2_GUI_Common_TwoAxisControlHandler_ControlAcceptedEvent_o *
Nekki_SF2_GUI_Common_TwoAxisControlHandler__get_OnControlAccepted
          (Nekki_SF2_GUI_Common_TwoAxisControlHandler_o *__this,MethodInfo *method)

{
                    /* try { // try from 034b16f0 to 035b16f7 has its CatchHandler @ 034b1a50 */
  return (__this->fields)._OnControlAccepted;
}

