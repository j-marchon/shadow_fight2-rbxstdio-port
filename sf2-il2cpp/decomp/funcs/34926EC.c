// ALOGBMGGBEP$$Equals @ RVA 0x34926EC

/* WARNING: Control flow encountered bad instruction data */

bool ALOGBMGGBEP__Equals(ALOGBMGGBEP_o *__this,ALOGBMGGBEP_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG == (ALOGBMGGBEP_o *)0x0) {
    bVar1 = false;
  }
  else {
                    /* try { // try from 03592704 to 03692797 has its CatchHandler @ 03592704
                       catch() { ... } // from try @ 03592704 with catch @ 03592704
                       catch() { ... } // from try @ 035927b4 with catch @ 03592704
                       catch() { ... } // from try @ 035927d8 with catch @ 03592704
                       catch() { ... } // from try @ 03592800 with catch @ 03592704
                       catch() { ... } // from try @ 03592840 with catch @ 03592704 */
    if (IBKIPBJJCPG != __this) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar1 = true;
  }
  return bVar1;
}

