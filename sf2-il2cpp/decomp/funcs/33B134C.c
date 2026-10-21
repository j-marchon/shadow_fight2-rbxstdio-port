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
    FUN_01bab630(&StringLiteral_12412);
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
          UnityEngine_Debug__LogFormat(StringLiteral_12412,args,(MethodInfo *)0x0);
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

