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

