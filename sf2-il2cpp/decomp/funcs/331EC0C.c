// KJFLIAMBKEB$$JHMMCPPCOPA @ RVA 0x331EC0C

UnityEngine_SceneManagement_Scene_o KJFLIAMBKEB__JHMMCPPCOPA(MethodInfo *method)

{
  UnityEngine_SceneManagement_Scene_o UVar1;
  
                    /* try { // try from 0341ec0c to 0351ec0f has its CatchHandler @ 0341ec30 */
                    /* try { // try from 0341ec10 to 0351ec37 has its CatchHandler @ 0341e9a4 */
  if ((DAT_04567831 & 1) == 0) {
                    /* catch() { ... } // from try @ 0341ec0c with catch @ 0341ec30 */
    FUN_01bab630(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
                    /* try { // try from 0341ec38 to 0351ec3f has its CatchHandler @ 0341ec54 */
    DAT_04567831 = 1;
  }
                    /* try { // try from 0341ec40 to 0351ec4b has its CatchHandler @ 0341e9a4 */
  if ((UnityEngine_SceneManagement_SceneManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0341ec4c to 0351ec53 has its CatchHandler @ 0341ec54 */
  UVar1 = UnityEngine_SceneManagement_SceneManager__GetActiveScene((MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0341ec38 with catch @ 0341ec54
                       catch(type#2 @ 00000000) { ... } // from try @ 0341ec4c with catch @ 0341ec54
                        */
  return (UnityEngine_SceneManagement_Scene_Fields)(UnityEngine_SceneManagement_Scene_Fields)UVar1;
}

