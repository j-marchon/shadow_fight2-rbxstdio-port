// InControl.InputManager$$get_IsDualMode @ RVA 0x3215244

bool InControl_InputManager__get_IsDualMode(MethodInfo *method)

{
                    /* catch() { ... } // from try @ 03315224 with catch @ 03315248 */
                    /* try { // try from 03315250 to 03415257 has its CatchHandler @ 0331526c */
                    /* try { // try from 03315258 to 03415263 has its CatchHandler @ 0331507c */
  if ((DAT_04566ebf & 1) == 0) {
                    /* try { // try from 03315264 to 0341526b has its CatchHandler @ 0331526c */
    FUN_01bab630(&InControl_InputManager_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03315250 with catch @ 0331526c
                       catch(type#2 @ 00000000) { ... } // from try @ 03315264 with catch @ 0331526c
                        */
    DAT_04566ebf = 1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03315294 to 03415347 has its CatchHandler @ 03315294
                       catch() { ... } // from try @ 03315294 with catch @ 03315294
                       catch() { ... } // from try @ 03315350 with catch @ 03315294
                       catch() { ... } // from try @ 03315400 with catch @ 03315294
                       catch() { ... } // from try @ 03315428 with catch @ 03315294
                       catch() { ... } // from try @ 03315458 with catch @ 03315294 */
  return InControl_InputManager_TypeInfo->static_fields->isDualMode;
}

