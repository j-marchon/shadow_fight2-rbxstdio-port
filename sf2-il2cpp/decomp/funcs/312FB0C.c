// Nekki.SF2.GUI.Fight.EndPvpFightContent$$FinishAnimation @ RVA 0x312FB0C

void Nekki_SF2_GUI_Fight_EndPvpFightContent__FinishAnimation
               (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *__this,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  System_Collections_Generic_List_object__o *__this_00;
  VirtualInvokeData *pVVar4;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  Il2CppClass *pIVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045666bf & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MCNGELCOMNG>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MCNGELCOMNG>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MCNGELCOMNG>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MCNGELCOMNG>_GetEnumerator__);
    FUN_01bab630(&MCNGELCOMNG_TypeInfo);
    DAT_045666bf = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).NDEECPOPNFM;
  if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,__this_00,Method_System_Collections_Generic_List<MCNGELCOMNG>_GetEnumerator__
            );
  do {
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<MCNGELCOMNG>_MoveNext__);
    pIVar2 = local_48.fields._current;
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_48,Method_System_Collections_Generic_List_Enumerator<MCNGELCOMNG>_Dispose__)
      ;
      Nekki_SF2_GUI_Fight_EndPvpFightContent__CCNAMPDODEA(__this,true,in_x2);
      return;
    }
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar5 = (local_48.fields._current)->klass;
    uVar1._0_1_ = (pIVar5->_2).rank;
    uVar1._1_1_ = (pIVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      piVar7 = &((pIVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)MCNGELCOMNG_TypeInfo) {
          pVVar4 = pIVar5->vtable + (*piVar7 + 1);
          goto LAB_0322fc14;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    in_x2 = (MethodInfo *)0x1;
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(local_48.fields._current);
LAB_0322fc14:
    (*pVVar4->methodPtr)(pIVar2,pVVar4->method);
  } while( true );
}

