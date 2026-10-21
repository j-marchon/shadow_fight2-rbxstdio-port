// Nekki.SF2.GUI.TextPic$$LEACABKPAJF @ RVA 0x30B5420

void Nekki_SF2_GUI_TextPic__LEACABKPAJF(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  UnityEngine_Bounds_o *pUVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  Nekki_SF2_GUI_TextDebugger_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  MethodInfo *extraout_x1;
  byte bVar4;
  undefined8 uVar5;
  System_Action_o *pSVar6;
  uint uVar7;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_045661fa & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045661fa = 1;
    method = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).IHEKNEDMHDK;
  if (__this_00 != (Nekki_SF2_GUI_TextDebugger_o *)0x0) {
    Nekki_SF2_GUI_TextPic_ABOHOFBMBHP__LLCONNGHGKD
              ((Nekki_SF2_GUI_TextPic_ABOHOFBMBHP_o *)__this_00,method);
    __this_01 = (System_Collections_Generic_List_object__o *)(__this->fields).NMHDAIIIHFP;
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,__this_01,Method_System_Collections_Generic_List<Glyph>_GetEnumerator__);
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._list = local_88.fields._list;
      local_70.fields._current = local_88.fields._current;
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_70,
                           Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__);
        pIVar2 = local_70.fields._current;
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_70,Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
          return;
        }
        pUVar1 = &(__this->fields)._CDKHEGGEFOC_k__BackingField;
        uVar5._0_4_ = (pUVar1->fields).m_Extents.fields.y;
        uVar5._4_4_ = (pUVar1->fields).m_Extents.fields.z;
        uVar7 = *(uint *)((long)&(__this->fields).POHAMNFPKNM + 4);
        pSVar6 = (__this->fields).MPHECBPOAIC;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pSVar6,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar3) {
          pSVar6 = (__this->fields).MPHECBPOAIC;
          if (pSVar6 == (System_Action_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar4 = *(byte *)&pSVar6[1].fields.super.super.method_info ^ 1;
        }
        else {
          bVar4 = 0;
        }
        if (pIVar2 == (Il2CppObject *)0x0) break;
        (*pIVar2->klass->vtable[7].methodPtr)
                  ((ulong)uVar7,pIVar2,uVar5,(ulong)(bVar4 != 0),pIVar2->klass->vtable[7].method);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

