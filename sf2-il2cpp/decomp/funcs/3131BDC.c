// InControl.Utility$$DrawOvalGizmo @ RVA 0x3131BDC

void InControl_Utility__DrawOvalGizmo
               (UnityEngine_Vector2_o center,UnityEngine_Vector2_o size,UnityEngine_Color_o color,
               MethodInfo *method)

{
  InControl_Utility_c *method_00;
  
  if ((DAT_045666d0 & 1) == 0) {
    FUN_01bab630(&InControl_Utility_TypeInfo);
    DAT_045666d0 = 1;
  }
  UnityEngine_Gizmos__set_color(color,(MethodInfo *)0x0);
  method_00 = InControl_Utility_TypeInfo;
  if ((InControl_Utility_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (InControl_Utility_c *)thunk_FUN_01ba7564();
  }
  InControl_Utility__DrawOvalGizmo(center,size,(MethodInfo *)method_00);
  return;
}

