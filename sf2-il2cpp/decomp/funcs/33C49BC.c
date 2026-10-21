// OGNCMFBMBMB$$IFIEMIIMCKM @ RVA 0x33C49BC

void OGNCMFBMBMB__IFIEMIIMCKM(OGNCMFBMBMB_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567de8 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_OGNCMFBMBMB_AFGELJDFHIF>_Clear__
                );
    DAT_04567de8 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).EMOGELNBIOO;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Clear
              (__this_00,
               Method_System_Collections_Generic_Dictionary<string,_OGNCMFBMBMB_AFGELJDFHIF>_Clear__
              );
    UnityEngine_TransformExtensions__DeleteAllChildrenObjects
              ((UnityEngine_Transform_o *)(__this->fields).HHCKEAILEEN,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

