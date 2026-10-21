// Nekki.SF2.Core.Fights.Renders.Model.ModelCapsuleRendererHolder$$ChangeColor @ RVA 0x3111360

void Nekki_SF2_Core_Fights_Renders_Model_ModelCapsuleRendererHolder__ChangeColor
               (Nekki_SF2_Core_Fights_Renders_Model_ModelCapsuleRendererHolder_o *__this,
               UnityEngine_Color_o BCPMKLLLFDL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_CapsuleRender__o *__this_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_04566584 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CapsuleRender>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CapsuleRender>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CapsuleRender>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CapsuleRender>_GetEnumerator__);
    DAT_04566584 = 1;
    method = extraout_x1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).NAAEHBPHOMJ;
  if (__this_00 != (System_Collections_Generic_List_CapsuleRender__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<CapsuleRender>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_58,
                         Method_System_Collections_Generic_List_Enumerator<CapsuleRender>_MoveNext__
                        );
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_58,
                   Method_System_Collections_Generic_List_Enumerator<CapsuleRender>_Dispose__);
        return;
      }
      if ((Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender_o *)local_58.fields._current ==
          (Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender_o *)0x0) break;
      Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender__set_Color
                ((Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender_o *)local_58.fields._current,
                 BCPMKLLLFDL,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

