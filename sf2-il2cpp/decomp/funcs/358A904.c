// EnterScreen$$.ctor @ RVA 0x358A904

void EnterScreen___ctor(EnterScreen_o *__this,MethodInfo *method)

{
  undefined1 auVar1 [16];
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368a8ec with catch @ 0368a904
                        */
  auVar1 = NEON_fmov(0x3f800000,4);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368a8e8 with catch @ 0368a908
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368a834 with catch @ 0368a90c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368a820 with catch @ 0368a910
                        */
  (__this->fields).expandTime = (float)(int)auVar1._8_8_;
  (__this->fields).hideTime = (float)(int)((ulong)auVar1._8_8_ >> 0x20);
  (__this->fields).MAX_OPACITY = (float)(int)auVar1._0_8_;
  (__this->fields).fadeTime = (float)(int)((ulong)auVar1._0_8_ >> 0x20);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368a7f4 with catch @ 0368a914
                        */
  (__this->fields).endTime = 1.0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368a798 with catch @ 0368a918
                        */
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

