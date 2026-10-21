// IEFEBEDLHNN$$KOIFGOMDJGJ @ RVA 0x308B938

Nekki_SF2_Core_Fights_Renders_Model_NodeRenderer_o *
IEFEBEDLHNN__KOIFGOMDJGJ
          (IEFEBEDLHNN_o *__this,UnityEngine_Transform_o *NCKFIGCBCPO,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_Core_Fights_Renders_Model_NodeRenderer_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  System_String_o *name;
  
                    /* try { // try from 0318b948 to 0328b94f has its CatchHandler @ 0318ba7c */
                    /* try { // try from 0318b950 to 0328b973 has its CatchHandler @ 0318ba84 */
  if ((DAT_0456605a & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<NodeRenderer>__);
                    /* try { // try from 0318b974 to 0328b987 has its CatchHandler @ 0318ba80 */
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    DAT_0456605a = 1;
  }
  name = (__this->fields).NPFMOEOIEKM;
                    /* try { // try from 0318b988 to 0328ba9b has its CatchHandler @ 0318b5e8 */
  __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(__this_00,name,(MethodInfo *)0x0);
  if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
     (__this_01 = (Nekki_SF2_Core_Fights_Renders_Model_NodeRenderer_o *)
                  UnityEngine_GameObject__AddComponent<object>
                            (__this_00,Method_UnityEngine_GameObject_AddComponent<NodeRenderer>__),
     __this_01 != (Nekki_SF2_Core_Fights_Renders_Model_NodeRenderer_o *)0x0)) {
    Nekki_SF2_Core_Fights_Renders_Model_NodeRenderer__set_Node(__this_01,__this,(MethodInfo *)0x0);
    __this_02 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_02 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(__this_02,NCKFIGCBCPO,false,(MethodInfo *)0x0);
      return __this_01;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

