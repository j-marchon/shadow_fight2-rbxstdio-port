// Nekki.SF2.GUI.TextDebugger$$Instantiate @ RVA 0x35A7498

Nekki_SF2_GUI_TextDebugger_o *
Nekki_SF2_GUI_TextDebugger__Instantiate
          (UnityEngine_GameObject_o *ELOCKFLGKNO,Nekki_SF2_GUI_TextPic_o *FJIIJLKIKLE,
          MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  Nekki_SF2_GUI_TextDebugger_o *pNVar1;
  
  if ((DAT_04568e21 & 1) == 0) {
                    /* try { // try from 036a74d0 to 037a74d7 has its CatchHandler @ 036a7650 */
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<CanvasRenderer>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<TextDebugger>__);
                    /* try { // try from 036a74e0 to 037a74e7 has its CatchHandler @ 036a7640 */
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
                    /* try { // try from 036a74ec to 037a74f3 has its CatchHandler @ 036a7644 */
    FUN_01bab630(&StringLiteral_12890);
    DAT_04568e21 = 1;
  }
  __this = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
                    /* try { // try from 036a750c to 037a7513 has its CatchHandler @ 036a763c */
  UnityEngine_GameObject___ctor(__this,StringLiteral_12890,(MethodInfo *)0x0);
                    /* try { // try from 036a751c to 037a7523 has its CatchHandler @ 036a762c */
                    /* try { // try from 036a7524 to 037a752f has its CatchHandler @ 036a7634 */
                    /* try { // try from 036a7538 to 037a7543 has its CatchHandler @ 036a7630 */
  if (((__this != (UnityEngine_GameObject_o *)0x0) &&
      (__this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0),
      ELOCKFLGKNO != (UnityEngine_GameObject_o *)0x0)) &&
     (parent = UnityEngine_GameObject__get_transform(ELOCKFLGKNO,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
                    /* try { // try from 036a7544 to 037a7603 has its CatchHandler @ 036a7188 */
    UnityEngine_Transform__SetParent(__this_00,parent,false,(MethodInfo *)0x0);
    UnityEngine_GameObject__AddComponent<object>
              (__this,Method_UnityEngine_GameObject_AddComponent<CanvasRenderer>__);
    pNVar1 = (Nekki_SF2_GUI_TextDebugger_o *)
             UnityEngine_GameObject__AddComponent<object>
                       (__this,Method_UnityEngine_GameObject_AddComponent<TextDebugger>__);
    if (pNVar1 != (Nekki_SF2_GUI_TextDebugger_o *)0x0) {
      (*((Il2CppClass *)pNVar1->klass)->vtable[0x41].methodPtr)
                (pNVar1,FJIIJLKIKLE,((Il2CppClass *)pNVar1->klass)->vtable[0x41].method);
      return pNVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

