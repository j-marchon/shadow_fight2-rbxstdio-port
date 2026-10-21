// InControl.UnityInputDeviceManager$$AutoDiscoverDeviceProfiles @ RVA 0x34AAC10

void InControl_UnityInputDeviceManager__AutoDiscoverDeviceProfiles
               (InControl_UnityInputDeviceManager_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  System_Type_o *type;
  InControl_UnityInputDeviceProfile_o *__this_00;
  System_Collections_Generic_List_UnityInputDeviceProfile__o *__this_01;
  MethodInfo *extraout_x1;
  ulong uVar5;
  InControl_UnityInputDeviceProfile_array *pIVar6;
  System_String_o *pSVar7;
  System_String_array *pSVar8;
  ulong uVar9;
  
  if ((DAT_04568531 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<UnityInputDeviceProfile>_Add__);
    FUN_01bab630(&Method_System_Type_GetType__);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&Method_InControl_UnityInputDeviceManager_AutoDiscoverDeviceProfiles__);
    FUN_01bab630(&InControl_UnityInputDeviceProfileList_TypeInfo);
    FUN_01bab630(&InControl_UnityInputDeviceProfile_TypeInfo);
    DAT_04568531 = 1;
    method = extraout_x1;
  }
  if ((InControl_UnityInputDeviceProfileList_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_UnityInputDeviceProfileList_TypeInfo,method);
  }
  pSVar8 = InControl_UnityInputDeviceProfileList_TypeInfo->static_fields->Profiles;
  if (pSVar8 != (System_String_array *)0x0) {
    if (0 < (int)pSVar8->max_length) {
      uVar9 = 0;
      uVar5 = pSVar8->max_length & 0xffffffff;
      do {
        if (uVar5 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        pSVar7 = pSVar8->m_Items[uVar9];
        if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        type = (System_Type_o *)
               FUN_01babac0(pSVar7,Method_System_Type_GetType__,
                            Method_InControl_UnityInputDeviceManager_AutoDiscoverDeviceProfiles__);
        __this_00 = (InControl_UnityInputDeviceProfile_o *)
                    System_Activator__CreateInstance(type,(MethodInfo *)0x0);
        if (__this_00 == (InControl_UnityInputDeviceProfile_o *)0x0) goto LAB_035aae00;
        bVar1 = (InControl_UnityInputDeviceProfile_TypeInfo->_2).naturalAligment;
        if (((__this_00->klass->_2).naturalAligment < bVar1) ||
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)InControl_UnityInputDeviceProfile_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(__this_00);
        }
        bVar4 = InControl_UnityInputDeviceProfile__get_IsSupportedOnThisPlatform
                          (__this_00,(MethodInfo *)0x0);
        lVar3 = Method_System_Collections_Generic_List<UnityInputDeviceProfile>_Add__;
        if (bVar4) {
          __this_01 = (__this->fields).deviceProfiles;
          if (__this_01 == (System_Collections_Generic_List_UnityInputDeviceProfile__o *)0x0)
          goto LAB_035aae00;
          pIVar6 = (__this_01->fields)._items;
          (__this_01->fields)._version = (__this_01->fields)._version + 1;
          if (pIVar6 == (InControl_UnityInputDeviceProfile_array *)0x0) goto LAB_035aae00;
          uVar2 = (__this_01->fields)._size;
          if (uVar2 < (uint)pIVar6->max_length) {
            (__this_01->fields)._size = uVar2 + 1;
            pIVar6->m_Items[(int)uVar2] = __this_00;
            thunk_FUN_01c20e04(pIVar6->m_Items + (int)uVar2,__this_00);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,
                       (Il2CppObject *)__this_00,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar2 = (uint)pSVar8->max_length;
        uVar5 = (ulong)uVar2;
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)uVar2);
    }
    return;
  }
LAB_035aae00:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

