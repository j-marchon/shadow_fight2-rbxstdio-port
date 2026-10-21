// IEFEBEDLHNN$$.cctor @ RVA 0x308BA20

void IEFEBEDLHNN___cctor(MethodInfo *method)

{
  CNDPAJOLKFN_o *__this;
  
  if ((DAT_0456605b & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    FUN_01bab630(&IEFEBEDLHNN_TypeInfo);
    DAT_0456605b = 1;
  }
  __this = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
  CNDPAJOLKFN___ctor(__this,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0318b948 with catch @ 0318ba7c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0318b974 with catch @ 0318ba80
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0318b950 with catch @ 0318ba84
                        */
  IEFEBEDLHNN_TypeInfo->static_fields->LGIKFIENPIG = __this;
  thunk_FUN_01c20e04(IEFEBEDLHNN_TypeInfo->static_fields,__this);
  return;
}

