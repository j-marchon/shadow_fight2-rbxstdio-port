// InControl.Utility$$DrawCircleGizmo @ RVA 0x31319D4

void InControl_Utility__DrawCircleGizmo
               (UnityEngine_Vector2_o center,float radius,UnityEngine_Color_o color,
               MethodInfo *method)

{
  InControl_Utility_c *method_00;
  
  if ((DAT_045666ce & 1) == 0) {
    FUN_01bab630(&InControl_Utility_TypeInfo);
    DAT_045666ce = 1;
  }
  UnityEngine_Gizmos__set_color(color,(MethodInfo *)0x0);
  method_00 = InControl_Utility_TypeInfo;
  if ((InControl_Utility_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (InControl_Utility_c *)thunk_FUN_01ba7564();
  }
  InControl_Utility__DrawCircleGizmo(center,radius,(MethodInfo *)method_00);
  return;
}

