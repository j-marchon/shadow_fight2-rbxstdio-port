// Nekki.SF2.GUI.Tutorial.Controls.TutorialTouch$$IACJCFBKLNL @ RVA 0x329402C

void Nekki_SF2_GUI_Tutorial_Controls_TutorialTouch__IACJCFBKLNL
               (Nekki_SF2_GUI_Tutorial_Controls_TutorialTouch_o *__this,int32_t HJEBKCDDBAB,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *t1;
  Nekki_SF2_GUI_Tutorial_Controls_TutorialTouch_c *pNVar2;
  undefined8 uVar3;
  undefined8 in_d1;
  undefined8 uVar4;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o worldPos;
  undefined4 extraout_var;
  undefined4 uVar5;
  
  uVar5 = (undefined4)((ulong)in_d1 >> 0x20);
                    /* try { // try from 03394034 to 03494037 has its CatchHandler @ 03394058 */
                    /* try { // try from 03394038 to 0349405f has its CatchHandler @ 03393db0 */
  if ((DAT_0456734f & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
                    /* catch() { ... } // from try @ 03394034 with catch @ 03394058 */
    DAT_0456734f = 1;
  }
                    /* try { // try from 03394060 to 03494067 has its CatchHandler @ 0339407c */
  UVar6 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  uVar4 = CONCAT44(uVar5,UVar6.fields.y);
  uVar3 = CONCAT44(extraout_var,UVar6.fields.x);
                    /* try { // try from 03394068 to 03494073 has its CatchHandler @ 03393db0 */
                    /* try { // try from 03394074 to 0349407b has its CatchHandler @ 0339407c */
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03394060 with catch @ 0339407c
                       catch(type#2 @ 00000000) { ... } // from try @ 03394074 with catch @ 0339407c
                        */
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    t1 = (UnityEngine_RectTransform_o *)
         UnityEngine_GameObject__GetComponent<object>
                   (__this_00,Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
    worldPos.fields.z = 0.0;
    worldPos.fields.x = (float)(int)UVar6.fields._0_8_;
    worldPos.fields.y = (float)(int)(UVar6.fields._0_8_ >> 0x20);
    bVar1 = UnityEngine_TransformExtensions__IsIntersects
                      (t1,worldPos,(UnityEngine_Vector3_array *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (HJEBKCDDBAB == 2) {
                    /* WARNING: Could not recover jumptable at 0x03394158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(__this->klass->vtable)._6_NKGGEIDHNJA.methodPtr)
                  (uVar3,uVar4,__this,(__this->klass->vtable)._6_NKGGEIDHNJA.method);
        return;
      }
      if (HJEBKCDDBAB == 1) {
        (*(__this->klass->vtable)._7_NJHDNHBJPDH.methodPtr)
                  (uVar3,uVar4,__this,(__this->klass->vtable)._7_NJHDNHBJPDH.method);
        (__this->fields).super.field_0x11 = 0;
      }
      else if (HJEBKCDDBAB == 0) {
        (*(__this->klass->vtable)._5_IMMFEBFFAEA.methodPtr)
                  (uVar3,uVar4,__this,(__this->klass->vtable)._5_IMMFEBFFAEA.method);
        (__this->fields).super.field_0x11 = 1;
      }
    }
    else if (HJEBKCDDBAB == 2) {
      pNVar2 = __this->klass;
      (__this->fields).super.field_0x11 = 0;
                    /* WARNING: Could not recover jumptable at 0x03394108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar2->vtable)._4_CGMNBHOHEPO.methodPtr)(__this,(pNVar2->vtable)._4_CGMNBHOHEPO.method);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

