// EIILGPAPGMJ$$IIMBMIOOJGB @ RVA 0x3582498

void EIILGPAPGMJ__IIMBMIOOJGB(EIILGPAPGMJ_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_o *enumType;
  System_String_o *value;
  Il2CppObject *pIVar1;
  int32_t *piVar2;
  UnityEngine_UI_Image_o *__this_00;
  System_Enum_o local_48;
  int32_t local_38;
  
                    /* try { // try from 036824c8 to 037824d7 has its CatchHandler @ 036828a4 */
  if ((DAT_04568cdb & 1) == 0) {
    FUN_01bab630(&System_Enum_TypeInfo);
    FUN_01bab630(&UnityEngine_SpriteDrawMode_TypeInfo);
                    /* try { // try from 036824e8 to 037824ef has its CatchHandler @ 03682870 */
    FUN_01bab630(&UnityEngine_UI_Image_Type_var);
    FUN_01bab630(&UnityEngine_UI_Image_Type_TypeInfo);
                    /* try { // try from 03682500 to 03782507 has its CatchHandler @ 03682884 */
    FUN_01bab630(&System_Type_TypeInfo);
                    /* try { // try from 0368250c to 03782527 has its CatchHandler @ 036828a0 */
    DAT_04568cdb = 1;
  }
  handle = UnityEngine_UI_Image_Type_var;
  __this_00 = (__this->fields).IAKCIALILLN;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03682534 to 0378253b has its CatchHandler @ 03682868 */
    thunk_FUN_01ba7564();
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  local_48.klass = (System_Enum_c *)UnityEngine_SpriteDrawMode_TypeInfo;
                    /* try { // try from 0368254c to 03782553 has its CatchHandler @ 0368286c */
                    /* try { // try from 03682558 to 0378257b has its CatchHandler @ 0368288c */
  local_48.monitor = (void *)0xffffffffffffffff;
  local_38 = CJNHFNHJHPE;
  value = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
  if ((System_Enum_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Enum_TypeInfo);
  }
                    /* try { // try from 0368257c to 03782587 has its CatchHandler @ 03682810 */
  pIVar1 = System_Enum__Parse(enumType,value,true,(MethodInfo *)0x0);
  if ((__this_00 != (UnityEngine_UI_Image_o *)0x0) && (pIVar1 != (Il2CppObject *)0x0)) {
                    /* try { // try from 03682598 to 0378259f has its CatchHandler @ 0368282c */
                    /* try { // try from 036825b0 to 037825b7 has its CatchHandler @ 03682828 */
    if ((pIVar1->klass->_1).element_class == (UnityEngine_UI_Image_Type_TypeInfo->_1).element_class)
    {
      piVar2 = (int32_t *)thunk_FUN_01bda96c();
                    /* try { // try from 036825bc to 037825d3 has its CatchHandler @ 0368289c */
      UnityEngine_UI_Image__set_type(__this_00,*piVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01babc64();
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 036825e0 to 037825e7 has its CatchHandler @ 0368284c */
  FUN_01bab8c8();
}

