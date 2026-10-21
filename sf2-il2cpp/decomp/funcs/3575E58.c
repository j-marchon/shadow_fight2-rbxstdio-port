// Core.Network.ServerProvider$$set_VerifyURL @ RVA 0x3575E58

void Core_Network_ServerProvider__set_VerifyURL(System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  if ((DAT_04568c85 & 1) == 0) {
    FUN_01bab630(&Core_Network_ServerProvider_TypeInfo);
                    /* try { // try from 03675e88 to 03775e8b has its CatchHandler @ 03675ec0 */
    DAT_04568c85 = 1;
  }
                    /* try { // try from 03675e8c to 03775e8f has its CatchHandler @ 03675ebc */
                    /* try { // try from 03675e90 to 03775e93 has its CatchHandler @ 03675eb8 */
                    /* try { // try from 03675e94 to 03775e97 has its CatchHandler @ 03675ea0 */
  ppSVar1 = &Core_Network_ServerProvider_TypeInfo->static_fields->_GELOLLPJMDE_k__BackingField;
                    /* try { // try from 03675e98 to 03775ee7 has its CatchHandler @ 03675608 */
  *ppSVar1 = CJNHFNHJHPE;
                    /* catch() { ... } // from try @ 03675e94 with catch @ 03675ea0 */
                    /* catch() { ... } // from try @ 03675c80 with catch @ 03675ea4 */
  thunk_FUN_01c20e04(ppSVar1,CJNHFNHJHPE);
  return;
}

