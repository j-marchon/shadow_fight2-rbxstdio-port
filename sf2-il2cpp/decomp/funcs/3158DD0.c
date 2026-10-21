// InControl.UnityInputDevice$$.ctor @ RVA 0x3158DD0

void InControl_UnityInputDevice___ctor
               (InControl_UnityInputDevice_o *__this,InControl_UnityInputDeviceProfile_o *profile,
               int32_t joystickId,MethodInfo *method)

{
  System_String_o *name;
  
                    /* try { // try from 03258dd8 to 03358ddb has its CatchHandler @ 03258e78 */
                    /* try { // try from 03258ddc to 03358deb has its CatchHandler @ 03258e84 */
  if ((DAT_04566855 & 1) == 0) {
    FUN_01bab630(&InControl_InputDevice_TypeInfo);
    DAT_04566855 = 1;
  }
  if (profile != (InControl_UnityInputDeviceProfile_o *)0x0) {
                    /* try { // try from 03258e10 to 03358e13 has its CatchHandler @ 03258e7c */
                    /* try { // try from 03258e14 to 03358e23 has its CatchHandler @ 03258e8c */
    name = (profile->fields)._Name_k__BackingField;
    if ((InControl_InputDevice_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    InControl_InputDevice___ctor((InControl_InputDevice_o *)__this,name,(MethodInfo *)0x0);
                    /* try { // try from 03258e38 to 03358e3f has its CatchHandler @ 03258fb4 */
                    /* try { // try from 03258e48 to 03358e4b has its CatchHandler @ 03258ea0 */
                    /* try { // try from 03258e50 to 03358e53 has its CatchHandler @ 03258e9c */
    InControl_UnityInputDevice__Initialize(__this,profile,joystickId,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

