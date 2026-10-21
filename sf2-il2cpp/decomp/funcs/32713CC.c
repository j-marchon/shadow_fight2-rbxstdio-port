// Nekki.SF2.GUI.StrikeThroughTextLine$$Instantiate @ RVA 0x32713CC

Nekki_SF2_GUI_StrikeThroughTextLine_o *
Nekki_SF2_GUI_StrikeThroughTextLine__Instantiate
          (UnityEngine_Transform_o *JJHEGPBBMLG,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  Nekki_SF2_GUI_StrikeThroughTextLine_o *pNVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456722a & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<CanvasRenderer>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<StrikeThroughTextLine>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&StringLiteral_12467);
    DAT_0456722a = 1;
    method = extraout_x1;
  }
  __this = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo,method);
  UnityEngine_GameObject___ctor(__this,StringLiteral_12467,(MethodInfo *)0x0);
  if ((__this != (UnityEngine_GameObject_o *)0x0) &&
     (__this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__SetParent(__this_00,JJHEGPBBMLG,false,(MethodInfo *)0x0);
    UnityEngine_GameObject__AddComponent<object>
              (__this,Method_UnityEngine_GameObject_AddComponent<CanvasRenderer>__);
    pNVar1 = (Nekki_SF2_GUI_StrikeThroughTextLine_o *)
             UnityEngine_GameObject__AddComponent<object>
                       (__this,Method_UnityEngine_GameObject_AddComponent<StrikeThroughTextLine>__);
    return pNVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

