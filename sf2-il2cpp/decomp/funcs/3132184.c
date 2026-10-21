// InControl.Utility$$ApplyCircularDeadZone @ RVA 0x3132184

UnityEngine_Vector2_o
InControl_Utility__ApplyCircularDeadZone
          (float axisX,float axisY,float lowerDeadZone,float upperDeadZone,MethodInfo *method)

{
  InControl_Utility_c *method_00;
  UnityEngine_Vector2_o axisVector;
  UnityEngine_Vector2_Fields UVar1;
  
  if ((DAT_045666d3 & 1) == 0) {
    FUN_01bab630(&InControl_Utility_TypeInfo);
    DAT_045666d3 = 1;
  }
  method_00 = InControl_Utility_TypeInfo;
  if ((InControl_Utility_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (InControl_Utility_c *)thunk_FUN_01ba7564();
  }
  axisVector.fields.y = axisY;
  axisVector.fields.x = axisX;
  UVar1 = (UnityEngine_Vector2_Fields)
          InControl_Utility__ApplyCircularDeadZone
                    (axisVector,lowerDeadZone,upperDeadZone,(MethodInfo *)method_00);
  return (UnityEngine_Vector2_o)UVar1;
}

