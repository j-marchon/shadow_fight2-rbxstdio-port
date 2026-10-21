// CloseButton$$OIFPHNMJIEM @ RVA 0x303C144

void CloseButton__OIFPHNMJIEM(CloseButton_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector3_o value;
  
  __this_00 = SFButton__get_RectTransform((SFButton_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
                    /* try { // try from 0313c158 to 0323c15b has its CatchHandler @ 0313c258 */
    value.fields.z = 0.0;
    value.fields._0_8_ = (__this->fields).GOLEIJPNDMM.fields;
                    /* try { // try from 0313c164 to 0323c16b has its CatchHandler @ 0313c274 */
    UnityEngine_Transform__set_localPosition
              ((UnityEngine_Transform_o *)__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

