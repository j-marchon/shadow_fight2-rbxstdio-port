// Nekki.SF2.GUI.Dialogs.DownloadingScreen$$DestroyAfterSeconds @ RVA 0x3441E44

void Nekki_SF2_GUI_Dialogs_DownloadingScreen__DestroyAfterSeconds
               (Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *__this,float LFJGFLNMBMC,
               System_Action_o *CPECAEHDDDB,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *extraout_x0;
  Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *__this_00;
  System_Collections_IEnumerator_o *pSVar1;
  System_Collections_IEnumerator_o **ppSVar2;
  
  ppSVar2 = &(__this->fields).DPFLHBIBGFB;
                    /* try { // try from 03541e4c to 03641e4f has its CatchHandler @ 03541e78 */
                    /* try { // try from 03541e50 to 03641e87 has its CatchHandler @ 03541a04 */
  pSVar1 = *ppSVar2;
  __this_00 = __this;
  if (pSVar1 != (System_Collections_IEnumerator_o *)0x0) {
    method = (MethodInfo *)0x0;
    UnityEngine_MonoBehaviour__StopCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,pSVar1,(MethodInfo *)0x0);
    __this_00 = extraout_x0;
  }
                    /* catch() { ... } // from try @ 03541e4c with catch @ 03541e78 */
  pSVar1 = Nekki_SF2_GUI_Dialogs_DownloadingScreen__BBCNAEPHINN
                     (__this_00,LFJGFLNMBMC,CPECAEHDDDB,method);
  (__this->fields).DPFLHBIBGFB = pSVar1;
                    /* try { // try from 03541e88 to 03641e8f has its CatchHandler @ 03541ea4 */
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
                    /* try { // try from 03541e90 to 03641e9b has its CatchHandler @ 03541a04 */
                    /* try { // try from 03541e9c to 03641ea3 has its CatchHandler @ 03541ea4 */
                    /* catch() { ... } // from try @ 03541cf8 with catch @ 03541ea4
                       catch() { ... } // from try @ 03541e1c with catch @ 03541ea4
                       catch() { ... } // from try @ 03541e88 with catch @ 03541ea4
                       catch() { ... } // from try @ 03541e9c with catch @ 03541ea4 */
                    /* try { // try from 03541ea8 to 03641fe7 has its CatchHandler @ 03541ea8
                       catch() { ... } // from try @ 03541ea8 with catch @ 03541ea8
                       catch() { ... } // from try @ 03542004 with catch @ 03541ea8
                       catch() { ... } // from try @ 035420e8 with catch @ 03541ea8
                       catch() { ... } // from try @ 03542124 with catch @ 03541ea8
                       catch() { ... } // from try @ 0354222c with catch @ 03541ea8
                       catch() { ... } // from try @ 0354224c with catch @ 03541ea8
                       catch() { ... } // from try @ 0354228c with catch @ 03541ea8 */
  UnityEngine_MonoBehaviour__StartCoroutine
            ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields).DPFLHBIBGFB,(MethodInfo *)0x0);
  return;
}

